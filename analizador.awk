/^+$/{
    printf "SUMA\n"
}

/^+\+$/{
    printf "INCR\n"
}

/^[0-9]+$/{
    printf "ENTERO\n"
}

/^([0-9]+).([0-9]+)$/{
    printf "REAL\n"
}

