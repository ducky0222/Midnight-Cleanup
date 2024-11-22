# Midnight Cleanup - Graduation Project

게임인재원의 졸업 프로젝트 **Midnight Cleanup**입니다.

[실행 파일 다운로드 링크](https://drive.google.com/file/d/1hroCBaxKAf4o9uD_DsyTVq8BXchf0YC-/view?usp=drive_link)

[![Midnight Cleanup](https://img.youtube.com/vi/WkjI6ZwUVwU/0.jpg)](https://youtu.be/WkjI6ZwUVwU)

이 프로젝트는 C++20과 DirectX 11을 사용하여 개발된 3D 그래픽스 애플리케이션입니다. 게임인재원 졸업 프로젝트로 2024년 4월부터 2024년 11월까지 진행되었으며, 팀원 간 협업과 그래픽스 기술을 활용한 학습 및 연구를 목적으로 제작되었습니다.

제가 맡은 부분은 DX11 렌더러와 컨텐츠 개발입니다.

## 빌드 방법

### 요구 사항

- **DirectX June 2010**: 먼저 설치 필요 ([다운로드 링크](https://www.microsoft.com/en-us/download/details.aspx?id=6812))
- **개발 언어**: C++
- **그래픽 API**: DirectX 11
- **의존성 라이브러리**:
  - vcpkg (패키지 매니저)
  - 구글 드라이브 리소스 (링크는 아래 참조)

### 빌드 절차

1. **프로젝트 클론**

   ```bash
   git clone https://github.com/your-repository-url/MidnightCleanup.git
   ```

2. **의존성 설치**

   - **vcpkg** 설치:
     ```bash
     git clone https://github.com/microsoft/vcpkg.git
     cd vcpkg
     ./bootstrap-vcpkg.bat
     ```
   - vcpkg_list.txt에서 필요한 패키지를 vcpkg를 통해 설치합니다.
     ```bash
     vcpkg install [필요한 패키지 목록]
     ```

3. **리소스 다운로드**

   - 구글 드라이브 링크에서 필요한 리소스를 다운로드합니다. 다운로드한 리소스 중 **Video** 폴더는 프로젝트의 **Resource** 폴더 안에 넣고, 나머지 **lib** 폴더 안의 **dll**과 **lib** 파일들은 빌드 후 나오는 **x64**의 **Release**와 **Debug** 폴더에 각각 넣어야 합니다.
   - [구글 드라이브 리소스 링크](https://drive.google.com/file/d/1f4w1fKhriLu79yv6hnbQB6U-psfcobQW/view?usp=drive_link)

4. **빌드 설정**

   - Visual Studio 또는 다른 C++ IDE에서 `MidnightCleanup` 프로젝트를 엽니다.
   - 빌드 구성(Configuration)을 **Release** 또는 **Debug**로 설정합니다.

5. **빌드**

   - IDE에서 **빌드(Build)** 버튼을 클릭하여 프로젝트를 빌드합니다.
   - 빌드된 실행 파일은 지정한 빌드 폴더에 저장됩니다.

### 참고 사항

- 이 프로젝트는 DirectX 11을 사용하므로, 최신 그래픽 드라이버가 설치되어 있어야 합니다.
- vcpkg를 통해 설치된 라이브러리와 구글 드라이브에서 제공된 리소스가 올바르게 설정되었는지 확인하세요.

