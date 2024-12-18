﻿#pragma once

class dtNavMesh;
class dtNavMeshQuery;

namespace core
{
	struct NavMeshData
	{
		dtNavMesh* navMesh = nullptr;			// Detour 네비게이션 메쉬 포인터
		dtNavMeshQuery* navMeshQuery = nullptr;	// 경로 탐색용 쿼리 객체
	};

	struct NavMeshSettings
	{
		// 셀 크기
		// 네비게이션 메쉬를 생성할 때 사용하는 셀 그리드의 가로 크기입니다.
		// 이 값이 작을수록 해상도가 높아지며, 더 정밀한 네비게이션 메쉬가 생성됩니다.
		float cellSize = 0.3f;
		
		// 셀 높이
		// 셀 그리드의 세로 크기입니다.
		// 지형의 높낮이 변화를 얼마나 세밀하게 다룰지를 결정합니다.
		float cellHeight = 0.2f;

		// 캐릭터 높이
		// 네비게이션 메쉬가 생성될 때 캐릭터가 지형을 이동할 수 있는 최소 높이입니다.
		// 캐릭터가 통과할 수 있는 아치형 통로나 문 등의 최소 높이를 결정합니다.
		float agentHeight = 2;

		// 캐릭터 반경
		// 캐릭터의 가로 크기를 나타냅니다.
		// 캐릭터가 충돌하지 않고 이동할 수 있는 통로의 최소 너비를 정의합니다.
		float agentRadius = 1;

		// 오를 수 있는 최대 높이
		// 캐릭터가 넘을 수 있는 최대 높이입니다.
		// 이 값보다 높은 벽은 캐릭터가 넘을 수 없게 됩니다.
		float agentMaxClimb = 0.9f;

		// 오를 수 있는 최대 각도
		// 캐릭터가 오를 수 있는 최대 경사 각도를 나타냅니다.
		// 이 값보다 경사가 가파른 지역은 캐릭터가 오를 수 없게 됩니다.
		float agentMaxSlope = 30.0f;

		// 최소 영역 크기
		// 네비게이션 메쉬에서 가장 작은 영역의 크기를 설정합니다.
		// 이 값보다 작은 영역은 네비게이션 메쉬에 포함되지 않습니다.
		// 작은 값: 더 작은 영역까지 포함, 더 많은 경로 가능.
		// 큰 값 : 작은 영역을 제거하여 성능을 개선할 수 있음.
		float regionMinSize = 8;

		// 병합 기준 크기
		// 영역을 병합할 때 기준이 되는 크기입니다.
		// 이 값보다 작은 영역은 인접한 더 큰 영역과 병합됩니다.
		// 이는 탐색 정확도와 성능에 영향을 미칩니다.
		// 작은 값: 더 작은 영역도 병합되어 간결한 네비게이션 메쉬 생성.
		// 큰 값 : 병합이 적게 일어나며 더 복잡한 네비게이션 메쉬가 생성될 수 있음.
		float regionMergeSize = 20;

		// 최대 모서리 길이
		// 네비게이션 메쉬에서 경계 모서리의 최대 길이를 설정합니다.
		// 이 값은 네비게이션 경로의 곡률과 경계 부분에서의 세밀도에 영향을 줍니다.
		float edgeMaxLen = 12.f;

		// 모서리 최대 오차
		// 모서리의 최대 허용 오차를 설정합니다.
		// 이 값이 크면 메쉬 경계의 세밀도가 낮아지고 성능이 개선될 수 있습니다.
		float edgeMaxError = 1.3f;

		// 다각형당 최대 꼭짓점 수
		// 하나의 다각형이 가질 수 있는 최대 꼭짓점의 수를 설정합니다.
		// 네비게이션 메쉬에서 다각형의 정밀도를 결정하는 요소입니다.
		float vertsPerPoly = 6.f;

		// 상세 샘플 거리
		// 세부적인 메쉬를 생성할 때 사용하는 샘플링 간격을 설정합니다.
		// 이 값이 작으면 메쉬의 세밀도가 높아지지만 성능이 떨어질 수 있습니다.
		float detailSampleDist = 6.f;

		// 상세 샘플 최대 오차
		// 상세 메쉬에서 샘플링 시 허용되는 최대 오차를 설정합니다.
		// 이 값이 크면 세부적인 메쉬가 덜 정밀해지지만 성능이 개선됩니다.
		float detailSampleMaxError = 1.f;

		// 분할 타입
		// 네비게이션 메쉬를 어떻게 분할할지를 결정하는 설정입니다.
		// 예를 들어, 균등 분할, 기하학적 분할 등의 방식을 선택할 수 있습니다.
		int partitionType = 1;

		// 네비게이션 메쉬 경계 최소값
		// 네비게이션 메쉬를 생성할 월드 공간의 최소 좌표를 의미합니다.
		// 이 좌표는 3D 공간에서 메쉬를 생성할 영역의 한 경계를 정의합니다.
		Vector3 navMeshBMin;

		// 네비게이션 메쉬 경계 최대값
		// 네비게이션 메쉬를 생성할 월드 공간의 최대 좌표를 의미합니다.
		// 이 좌표는 메쉬를 생성할 영역의 다른 경계를 정의합니다.
		Vector3 navMeshBMax;

		// 타일 크기
		// 네비게이션 메쉬 타일의 크기를 설정합니다.
		// 타일 기반 네비게이션 메쉬를 생성할 때 사용되며,
		// 타일의 크기에 따라 탐색 성능과 메모리 사용량이 영향을 받습니다.
		float tileSize = 32.f;

		
		std::string objMesh;

		std::string navMesh;
	};
}
