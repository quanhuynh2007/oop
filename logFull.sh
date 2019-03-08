#!/bin/bash
nodeServer=$1
pathNode=
nameString="0abcdefghijklmnopqrstuvwxyz1234"
if [ $nodeServer == 0 ]; then
    pathNode="nodes/00-eosio/stderr"
elif [ $nodeServer -lt 10 ]; then
    pathNode="nodes/0"$nodeServer"-producer111"${nameString:$nodeServer:1}"/stderr"
else
    pathNode="nodes/"$nodeServer"-producer111"${nameString:$nodeServer:1}"/stderr"
fi
tail -f $pathNode
