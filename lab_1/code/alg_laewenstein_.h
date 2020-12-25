#ifndef alg_laewenstein__h
#define alg_laewenstein__h

#include <algorithm>
#include <vector>
#include <string>
#include <math.h>

using namespace std;

int levenstein(string s1, string s2);
int levenstein_rec(string s1, string s2);
int dameray_levenstein(string s1, string s2);
int dameray_levenstein_rec(string s1, string s2);

#endif /* alg_laewenstein__h */
