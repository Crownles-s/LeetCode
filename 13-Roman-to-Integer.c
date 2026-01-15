int romanToInt(char* s) {
    int v[100];
    v['I'] = 1;
    v['V'] = 5;
    v['X'] = 10;
    v['L'] = 50;
    v['C'] = 100;
    v['D'] = 500;
    v['M'] = 1000;
    int t = 0, i, a, b;
    for (i = 0; s[i]; i++) {
        a = v[s[i]];
        b = v[s[i + 1]];
        if (a < b) t -= a;
        if (a >= b) t += a;
    }
    return t;
}
