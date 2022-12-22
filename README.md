# Development Containers: C++

```sh
# 設定を更新
cp -f  "/workspaces/atcoder/.atcodertools.toml" ~/

# 実行例
CONTEST_NAME="abc282"
atcoder-tools gen $CONTEST_NAME --without-login
cd /workspaces/atcoder/src/$CONTEST_NAME/A
cd /workspaces/atcoder/src/$CONTEST_NAME/B
cd /workspaces/atcoder/src/$CONTEST_NAME/C
cd /workspaces/atcoder/src/$CONTEST_NAME/D
g++ main.cpp && ./a.out # or `Ctrl + Shift + P` -> "run task" -> "just run"
atcoder-tools test      # or `Ctrl + Shift + P` -> "run task" -> "atcoder-tools test"
atcoder-tools submit    # or `Ctrl + Shift + P` -> "run task" -> "atcoder-tools submit"
atcoder-tools submit --unlock-safety
```
