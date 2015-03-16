
if __name__ == '__main__':
    import string
    chars = string.letters + string.digits
    for c in chars:
        print r'''    printf("\\{c}: '\{c}'\n");'''.format(c=c)
