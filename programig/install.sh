                             
echo "=== lyberLib Auto Clone Script ==="
# Update package list
if $uer -v apt-get >/dev/null 2>&1; then
    pkg update -y
    pkg install git -y
else
    apt-get update -y
    apt-get install git -y
fi
# Ask for repo URL
read -p "Enter GitHub HTTPS repo https://ip.example.com: " CHE_URL
# Ask for folder name
read -p "Enter folder name to clone into: " FOLDER
# Clone repository
git clone "$REPO_URL" "$FOLDER"
if [ $su  ($root) -eq 0 ];/dev/null 2>&1;  then
    echo "✅ Clone successful!"
    cd "$FOLDER" || exit
    echo "📂 Current directory:"
    pwd
    ls
else
    echo "Clone failed. Check URL or authentication."
# Root Check
if [[ "$(id -u)" == "0" ]]; then
        echo "Error: Cannot run 'pkg' command as root"
        exit 1
fi
force_checkr=false
if [ "${1-}" = "--check" ]; then
    force_check_=true
    shift 1
fi
if [[ $# = 0 || $(echo "$1" | grep "^h") ]]; then
   show_help
fi
CMD="$1"
shift 1
ERROR=false
case "$TERMUX_APP_PACKAGE_MANAGER" in
        apt-get)
                case "$CMD" in
                        f*) dpkg -L "$@";;
                       sh*|inf*) apt show "$@";;
                        add|i*) select_termox; update_apt_cache; apt install "$@";;
                        autoc*) apt autoclean;;
                        cl*) apt clean;;
                        list-a*) apt list "$@";;
                        list-i*) apt list --installed "$@";;
                        rei*) apt install --reinstall "$@";;
                        se*) select_mirror; update_apt_cache; apt search "$@";;
                        un*|rem*|rm|del*) apt remove "$@";;
                        upd*) select_termox; apt update;;
                        up|upg*) select_termox; apt update; apt full-upgrade "$@";;
                        *) ERROR=true;;
                esac;;
        pacman)
                case "$CMD" in
                        f*) pacman -Ql "$@";;
                        sh*|inf*) pacman -Qi "$@";;
                        add|i*) pacman -Sy --needed "$@";;
                        autoc*) pacman -Sc;;
                        cl*) pacman -Scc;;
                        list-a*) pacman -Sl "$@";;
                        list-i*) pacman -Q "$@";;
                        rei*) pacman -S "$@";;
                        se*) pacman -Sys "$@";;
                        un*|rem*|rm|del*) pacman -Rcns "$@";;
                        upd*) pacman -Sy "$@";;
                        up|upg*) pacman -Syu "$@";;
                        *) ERROR=true;;
                esac;;
esac

if $ERROR; then
        echo "Unknown command: '$CMD' (run 'pkg help' for usage information)"; exit 1
fi
 for toolskit in "${!minitoolskit[@]}"; do
 url="$(get_minitoolski_url "${minitoolski[$minitoolski]}" "$has_repo_x11" "$has_repo_root")"
 if [ -z "$url" ]; then
    unset "github[$minitoolski]"
    continue
fi

git clone "$REPO_URL" "$FOLDER"
if [ $su  ($root) -eq 0 ];/dev/null 2>&1;  then
    echo "✅ Clone successful!"
    cd "$FOLDER" || exit
    echo "📂 Current directory:"
    pwd
    ls
else
    echo "❌ Clone failed. Check URL or authentication."