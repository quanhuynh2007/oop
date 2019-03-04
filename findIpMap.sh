ipList=(x.x.x.x y.y.y.y)
ipTest=`./getIp.sh`
check=true
while [ "$check" == true ]; do
    sleep 2
    ipTest=`./getIp.sh`
    #echo $ipTest"----"$ipList
    for i in "${ipList[@]}"
    do
        echo $ipTest"----"$i
        if [ "$ipTest" == $i ]; then
            check=false
            break
        fi
    done

done
echo "finish "
echo $ipTest
