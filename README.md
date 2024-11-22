# Midnight Cleanup - Graduation Project

게임인재원의 졸업 프로젝트 **Midnight Cleanup**입니다.

## 빌드 방법

### 요구 사항
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
   - 필요한 패키지를 vcpkg를 통해 설치합니다.
     ```bash
     vcpkg install [필요한 패키지 목록]
     ```

3. **리소스 다운로드**
   - 구글 드라이브 링크에서 필요한 리소스를 다운로드하고 프로젝트의 리소스 폴더에 추가합니다.


4. **빌드 설정**
   - Visual Studio 또는 다른 C++ IDE에서 `MidnightCleanup` 프로젝트를 엽니다.
   - 빌드 구성(Configuration)을 **Release** 또는 **Debug**로 설정합니다.

5. **빌드**
   - IDE에서 **빌드(Build)** 버튼을 클릭하여 프로젝트를 빌드합니다.
   - 빌드된 실행 파일은 지정한 빌드 폴더에 저장됩니다.

### 참고 사항
- 이 프로젝트는 DirectX 11을 사용하므로, 최신 그래픽 드라이버가 설치되어 있어야 합니다.
- vcpkg를 통해 설치된 라이브러리와 구글 드라이브에서 제공된 리소스가 올바르게 설정되었는지 확인하세요.

