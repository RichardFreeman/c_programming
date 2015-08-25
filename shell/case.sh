#!/bash/sh

echo "Is it morning? Please answer yas or no"
read timeofday

case "$timeofday" in
    yes ) echo "Good Morning";;
    no  ) echo "Good Afternoon";;
    y   ) echo "Good Morning";;
    n   ) echo "Good Afternoon";;
    *   ) echo "Sorry, answer is not recongnized";;
esac

case "$timeofday" in
    YES | yes | y ) echo "Good Morning";;
    N* | no ) echo "Good Afternnon";;
    * ) echo "Sorry, answer is not recongized";;
esac

case "$timeofday" in
    YES | y | Yes | yes )
        echo "Good Morning"
        echo "Up bright and early this morning"
        ;;
    [nN]*)
        echo "Good Afternoon"
        ;;
    *)
        echo "Sorry, answer not recongnized"
        echo "Please answer yes or no"
        exit 1
        ;;
esac

exit 0
