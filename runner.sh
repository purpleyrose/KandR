#!/bin/zsh
# Compile and run C files with modern standards and warnings
# Usage: ./runner.sh <input_file.c> [--debug] [--clean]

if [ $# -eq 0 ]; then
    echo "Usage: $0 <input_file.c> [--debug] [--clean]"
    exit 1
fi

input_file="$1"
executable="${input_file%.*}"
shift

# Parse optional flags
debug_flags=""
clean_after=false

while [ $# -gt 0 ]; do
    case "$1" in
        --debug)
            debug_flags="-g -fsanitize=address -fsanitize=undefined"
            ;;
        --clean)
            clean_after=true
            ;;
    esac
    shift
done

# Compile
gcc -std=c11 -Wall -Wextra -Wpedantic $debug_flags -o "$executable" "$input_file"

if [ $? -ne 0 ]; then
    echo "Compilation failed."
    exit 1
fi

# Run
./"$executable"
exit_code=$?

# Optional cleanup
if $clean_after; then
    rm -f "$executable"
fi

exit $exit_code