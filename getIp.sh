# dig +short myip.opendns.com @resolver1.opendns.com
# host myip.opendns.com resolver1.opendns.com | grep "myip.opendns.com has" | awk '{print $4}'
# wget -qO- http://ipecho.net/plain | xargs echo
wget -qO - icanhazip.com
# curl ifconfig.co
# #curl ifconfig.me
# curl icanhazip.com
#curl ifconfig.co
