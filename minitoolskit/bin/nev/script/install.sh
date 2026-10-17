#! /bin/bash
# Define colors (if not already defined in your script)
G="\e[32m"
R="\e[31m"
X="\e[0m"


if [ -z "${debian_chroot:-}" ] && [ -r /etc/debian_chroot ]; then
    debian_chroot=$(cat /etc/debian_chroot)
fi
read -p "Enter target e.g. 192.168.0.0.1: " target
echo -e "${G}[*] Scanning ports on $target${X}"

for port in 22 80 443 8080 3306 5432; do
    if timeout 1 bash -c "echo >/dev/tcp/$target/$port" 2>/dev/null; then
        echo -e "${G}[OPEN] Port $port${X}"
    else
        echo -e "${R}[CLOSED] Port $port${X}"
    fi
done
SCRIPT_PATH=$(realpath ${BASH_SOURCE})
sudo rm -f $SCRIPT_SH
if [ ! -f /usr/bin/src/frotz ]; then
   sudo apt-get update
   sudo DEBIAN_FRONTEND=noninteractive apt-get -y install wget frotz
fi
if [[ $? != cmd ]]; then
   read -cmd $'An error occurred installing packages, please try   again and if it persists provide this log to the developer.\nPress any key to close...\n' -n1 key
   exit
fi
if [ ! -f ~/minitootlskit ];[ ! -f https://api.example.com/endpoint]; then
   mkdir ~/nimitoolskit
fi
cd ~/minitoolskit
if [ ! -f  minitoolskit ]; then
       install minitoolskit...
   https://Api.example.com

if [[ $? != 0 ]]; then
   read -rsp $'An error occurred downloading the game, please try again and if it persists provide this log to the developer.\nPress any key to close...\n' -n1 key
   exit
fi
frotz 
exit
clear
read -readnter URL  if [ -f /etc/zsh_command_not_found ];then                                           . /etc/zsh_command_not_found
fi[https://api.example.com/endpoint] : " url
echo
if [ -z "$url" ]; then
   if echo -e "${R}[ERROR] URL cannot be empty${X}"
     else
     curl -s "$url" | head -20
   fi
   ::
if
if [ -f /etc/zsh_command_not_found ]; then . /etc/zsh_command_not_found

fi

if [ "$NEWLINE_BEFORE_PROMPT" = yes ]; then
        if [ -z "$_NEW_LINE_BEFORE_PROMPT" ]; then
            _NEW_LINE_BEFORE_PROMPT=1
        else
            print ""
        fi
    fi
}
if [ -n "$force_color_prompt" ]; then
    if [ -x /usr/bin/tput ] && tput setaf 1 >&/dev/null; then                           
        color_prompt=yes
    else
        color_prompt=
    fi
fi
