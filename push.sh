#!/bin/bash
./clean.pl
git add -A .
git commit -m 'updates'
git pull
git push
