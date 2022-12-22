#!/bin/sh

if [ ! -e ".vscode/settings.json" ]; then
    cp ".vscode/settings_example.json" ".vscode/settings.json"
fi

cp ".atcodertools.toml" ~/

echo "postCreateCommand, Success!"
