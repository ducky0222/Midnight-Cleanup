#include "ShaderVariables.hlsl"
#include "SamplerStates.hlsl"

cbuffer cbPerLight
{
    VirtualDirectionalLight directionalLights;
    int useAlphaMap;
};

struct VertexIn
{
    float3 PosL : POSITION;
    float3 NormalL : NORMAL;
    float3 TangentL : TANGENT;
    float2 TexC : TEXCOORD0;
};

struct PixelIn
{
    float4 PosH : SV_POSITION;
    float2 TexC : TEXCOORD0;
};

Texture2D gAlpha;

PixelIn VSMain(VertexIn vin)
{
    PixelIn vout;
    
    // Transform to world space
    float4 posW = mul(float4(vin.PosL, 1.0f), gWorld);
    vout.PosH = mul(posW, directionalLights.viewProj);
    vout.TexC = mul(float4(vin.TexC, 0.0f, 1.0f), gTexTransform).xy;
    
    return vout;
}

float4 PSMain(PixelIn pin) : SV_TARGET
{
    if (useAlphaMap != 0)
    {
        float4 opacity = gAlpha.Sample(gsamAnisotropicWrap, pin.TexC);
        clip(opacity.a - 0.333f);
    }

    float depth = pin.PosH.z / pin.PosH.w;
    return float4(depth, depth, depth, 1.0f);
}