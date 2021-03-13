test_generate () {
    (cd "$1" && "$PACKCC" -o "parser" "input.peg")
}

test_compile() {
    local dir="$1"
    "${CC:-cc}" -I "$dir" "main.c" -o "$dir/parser"
}

run_for_input() {
    run timeout 5s "$(dirname "$1")/parser" < "$1"
    [ "$status" -eq 0 ]
    diff -uN "${1/input/expected}" --label "${1/input/expected}" <(echo "$output") --label "output"
}
