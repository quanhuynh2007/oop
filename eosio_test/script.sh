for (( i = 1; i <= 5; i++ )); do for (( j = 1 ; j <=5 ; j++ )); do cp configFull.ini ~/eosio_test/accountnum$i$j/config.ini; done; done
# for (( i = 1; i <= 5; i++ )); do for (( j = 1 ; j <=5 ; j++ )); do rm ~/eosio_test/accountnum$i$j/*; done; done
#for (( i = 1; i <= 5; i++ )); do for (( j = 1 ; j <=5 ; j++ )); do echo "p2p-peer-address = localhost:90"$i$j >> ~/eosio_test/configFull.ini; done; done
