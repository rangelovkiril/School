# Implement a function is_anagram(a, b), which returns True, if the string a is an
# anagram of b.

def is_anagram(fst_word, snd_word):
    
    if len(fst_word) != len(snd_word):
        return False

    low_case_fst_word = fst_word.lower()
    low_case_snd_word = snd_word.lower()

    fst_word_arr = sorted(list(low_case_fst_word))
    snd_word_arr = sorted(list(low_case_snd_word))

    return fst_word_arr == snd_word_arr

if __name__ == "__main__":
    first_word = input("Enter the first word: ")
    second_word = input("Enter the second word: ")

    print(is_anagram(first_word, second_word))
