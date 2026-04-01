#!/bin/bash

eval "$(ssh-agent -s)"
ssh-add ~/.ssh/id_ed25519

git push
git push pngToBin-remote pngToBin-branch:main
git push objToC-remote objToC-branch:main
git push lalg-remote lalg-branch:main
