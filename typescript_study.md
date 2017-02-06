### Typescript Documentation
## tsconfig
tsconfig.json 파일이 존재하는 디렉토리는 타입스크립트 프로젝트의 root 디렉토리입니다. tsconfig.json 파일은 루트 파일과 프로젝트 컴파일에 필요한 컴파일 옵션을 정의합니다. <br />
프로젝트는 다음과 같은 방법으로 컴파일됩니다. <br />

- input 파일 없이 tsc를 호출하면 컴파일러는 현재 디렉토리로부터 상위 디렉토리 로 연결하여 tsconfig.json 파일을 탐색합니다.
- input 파일 없이 tsconfig.json 파일 디렉토리를 정의하거나 configure json 파일경로를 지정하는 --project(or -p) command 옵션과 함께 tsc를 호출합니다. 
- input 파일이 있다면, tsconfig.json 파일은 무시됩니다.

```json
{
    "compilerOptions": {
        "module": "commonjs",
        "target": "es5",
        "noImplicitAny": false,
        "sourceMap": false
    },
    "files": [
        "core.ts",
        "sys.ts",
        "types.ts",
        "scanner.ts",
        "parser.ts",
        "utilities.ts",
        "binder.ts",
        "checker.ts",
        "emitter.ts",
        "program.ts",
        "commandLineParser.ts",
        "tsc.ts",
        "diagnosticInformationMap.generated.ts"
    ]
}
```



