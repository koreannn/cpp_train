벡터를 초기화 리스트로 초기화하는 기능이 C++ 11이상의 표준에서 지원되기 떄문에, 컴파일 시 아래 커맨드를 사용하자
- `g++ -std=c++11 버블정렬.cpp -o program`
- `g++ -std=c++17 버블정렬.cpp -o program`

아니면 VScode의 settings.json을 아래와 같이 수정하자.
```bash
"code-runner.executorMap": {
    "cpp": "cd $dir && g++ -std=c++17 $fileName -o $fileNameWithoutExt && $dir$fileNameWithoutExt"
}
```