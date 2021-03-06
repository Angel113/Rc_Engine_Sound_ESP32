const unsigned int brakeSampleRate = 22050;
const unsigned int brakeSampleCount = 8919;
const signed char brakeSamples[] = {
0, -1, 0, -1, -1, 0, -2, -1, 1, -2, -1, -1, 3, -2, -2, 3, 
-5, 1, 2, -1, -3, 2, -1, -2, 5, 3, 0, 2, 2, -7, 3, -3, 
-9, 0, 6, -3, 1, 3, 0, 6, -5, -12, -11, 0, 7, -1, 10, -3, 
-16, 7, -5, 1, 12, 0, -2, -7, 6, 3, 6, 1, -7, 2, -1, -11, 
9, 18, 0, -9, 10, -9, -12, 17, 2, -8, -11, 27, 17, -33, 3, 8, 
-10, 18, -4, -1, 22, -3, 2, 6, 6, -7, -4, -21, -14, 18, 2, 6, 
4, -4, 11, -1, 9, 8, 3, 6, -20, -2, 14, 0, 8, 8, 8, -7, 
-5, 4, -1, 11, -13, -4, 16, -14, 18, 4, -7, 5, 0, 23, -7, -20, 
3, 2, 6, 0, 1, -1, -10, 6, -4, 12, -3, -10, 22, 17, -23, -14, 
15, -1, -21, 28, 0, -8, 8, -22, -16, 16, 19, -8, -33, -5, 20, -10, 
-17, -11, -8, 9, -23, 8, 21, -23, -24, 17, -5, 1, 9, 3, -4, -11, 
16, -15, 5, -10, -23, 6, -8, 10, -5, -12, 6, 12, 6, -11, 2, 31, 
-11, -8, 4, -5, 0, 9, -21, -19, 22, 6, -30, -22, 7, -13, 1, -10, 
22, 37, -29, 30, 12, -23, -4, -7, -23, -15, 3, 5, -23, 27, 0, 8, 
18, -24, 16, -13, -15, 4, 12, 19, -36, -22, 6, 8, 14, -15, 13, 6, 
-23, 13, 10, -1, -45, -5, 14, -14, 1, 13, 20, 3, -19, -20, -15, -7, 
1, -3, -3, 1, 10, -12, 40, 6, -33, 29, -22, -30, -26, -9, 3, 17, 
-16, -49, 32, 45, -24, -7, 10, 18, 22, -20, -10, 22, -4, -52, 2, 42, 
-22, 12, 19, -17, -30, 19, -21, -28, 22, -7, 1, 24, 21, 14, -16, -7, 
-16, -7, -9, -7, 25, -3, 9, 1, -18, 34, -28, -15, 40, -16, 10, -30, 
-6, 4, 24, -21, -50, 52, 11, -57, 19, 7, -28, -34, 28, 50, -22, 24, 
17, -1, -5, -8, -33, 11, 49, -35, -17, 32, -20, -24, 7, 26, -19, 9, 
-10, -42, 4, -9, 3, -10, 34, 62, -35, 3, 4, -11, -24, -36, 37, 8, 
-5, 37, 0, 8, -14, -19, -23, -27, 83, 21, -30, 1, 0, 36, -5, 0, 
12, 17, 18, -8, -1, 13, -35, -5, 13, 5, 12, -3, 6, -14, 4, -9, 
-37, 6, 15, -41, 10, 26, 18, 14, -51, 6, 28, 21, -7, 9, 29, 13, 
-3, 6, -4, 26, -16, -8, -19, -35, 26, -24, 16, 18, -2, -22, 14, -19, 
-28, 30, 29, -21, 19, 34, -58, -52, -6, -7, 40, 53, -10, -8, -12, -23, 
-10, -48, 12, 6, 6, 10, -4, 34, -30, 23, -6, -31, 17, -19, -29, 13, 
42, 21, -17, -11, 15, -16, -5, -44, 7, 5, -14, -11, -32, 60, 17, 3, 
23, -26, 12, 14, -23, -24, 13, -34, -18, 0, 2, -13, 18, 54, 32, -17, 
-19, 59, -17, -20, 4, 13, -19, -11, -20, -64, 63, 30, -18, 8, -24, -12, 
11, -9, -1, 17, -26, -8, 1, -14, -60, 62, -10, -51, 26, -19, 14, -16, 
-56, -15, 22, 33, 5, 5, 4, -36, -48, -16, -20, 55, 26, -9, 19, 13, 
46, 0, -8, -35, -18, 6, -24, -15, -13, -9, 16, 0, -58, -23, -2, 5, 
24, 44, -28, -38, 38, 8, 21, 24, -56, -41, 46, 19, -45, -29, 26, 61, 
-49, 1, 80, 23, -26, -55, 33, 29, -67, -19, -9, -30, 42, -9, 37, 39, 
-42, -14, -21, 22, 29, -29, -37, -15, 29, 17, -13, -22, -34, -3, -13, 12, 
8, 14, 25, -16, 31, -16, -49, 56, 57, -24, 41, -63, 4, 69, -74, 27, 
28, -13, 3, -21, 13, 41, -4, 47, 29, -22, 27, -28, -10, -63, -51, 35, 
-99, -28, 60, 19, 10, -23, 34, 69, -50, -12, -15, -23, 85, -29, -40, 15, 
5, -5, 39, -12, -21, 38, -9, -11, 14, -31, -25, 57, -11, 28, -47, 42, 
65, -12, 45, -50, 12, 83, -49, 0, 81, -2, 21, -55, -66, 43, -11, 38, 
-18, -38, 37, 5, -14, 40, 7, -34, 58, -31, -52, 6, 42, -48, 24, 69, 
-85, -29, 55, -34, 65, 18, -95, 2, 11, -4, 51, -3, 65, 40, -55, 44, 
-4, -72, -37, 0, -64, 44, -14, -45, 93, -17, -30, 115, -23, -47, 58, -47, 
-25, 2, 43, -2, -57, 3, -2, 88, 66, -72, -64, -11, 6, -13, -13, 32, 
-15, 59, -3, -58, 30, 33, 1, -7, 6, -18, -43, -6, 11, 9, 10, 7, 
-4, 19, -11, -47, -62, 1, 28, 48, 8, -67, 27, 20, 11, -44, -36, 70, 
-7, -30, 19, -5, 36, 37, -86, -25, 7, -32, 47, -22, 12, 79, -35, 10, 
51, -35, 4, -45, -68, 68, -44, -31, 75, -21, -5, 5, 10, 8, -16, 19, 
-39, 0, 72, -58, 53, -8, -36, 54, -4, -33, 66, -50, -7, 37, -41, -15, 
-52, 11, 79, 77, -56, 15, 36, -1, -4, -21, -28, -22, 37, 17, 15, 29, 
-19, 27, 36, -80, -56, 27, 13, -35, -26, 9, -6, 3, 24, -48, 23, 21, 
-40, 37, -29, 12, -31, -20, 27, -27, 25, 1, -45, 10, 31, -15, 31, -34, 
-18, 39, 9, 17, -51, 6, 58, -16, 37, 26, -34, -24, -2, -29, 26, -12, 
-16, -37, -6, -18, -28, 68, 7, -10, 7, 3, 26, 16, -48, -46, 8, 52, 
4, -60, -22, -17, 74, 24, -51, -74, -35, 42, 22, 33, -17, -28, -4, 6, 
29, 20, -28, -51, 25, -14, 3, -45, -55, 51, 70, -27, -59, -28, 51, 38, 
-34, -6, 31, 71, -43, -82, 5, -47, -11, 23, 16, 63, -33, -20, 4, 22, 
38, -45, 17, -38, 13, -1, -40, 95, 23, 7, -28, -49, 19, 8, -12, -60, 
20, 21, -76, 29, -30, 10, -49, -9, 7, 14, 6, -43, 31, -4, 10, 3, 
50, 16, -29, 20, -19, -22, 22, -6, -66, 26, 8, 59, -16, -90, 10, -63, 
62, 29, -13, 39, -38, 31, 54, 30, -67, -37, -53, -24, 68, 11, 9, 15, 
-57, -31, -13, -9, 13, -26, 17, 62, 34, -21, -46, 0, 15, 48, 18, -41, 
9, -27, 8, 44, -43, -27, 3, 21, 7, 3, 47, 43, 6, -97, -81, -24, 
14, 24, 25, -11, -13, 60, 29, 13, 18, -56, -70, 2, -35, 36, 9, 1, 
36, -15, 25, -30, 15, 1, -40, 51, -27, 23, 10, -49, 9, -19, -13, 32, 
20, -41, -8, 53, -14, 29, 5, -39, -28, 33, 49, -21, -1, 22, -1, 1, 
-48, -8, -32, 23, 79, -86, -15, -4, 4, 20, -68, -24, 57, 75, 9, -35, 
13, 43, -9, -5, 14, -51, 13, -38, -17, 14, 7, 6, -29, 52, 33, -4, 
-7, -18, -54, -25, 33, 15, 17, -48, 60, -4, -5, 66, -44, -44, -36, 42, 
30, 29, -33, -20, -29, 13, 25, -44, 66, 2, -14, -15, 10, 44, -10, -40, 
-49, -20, 35, -70, -3, 93, 39, -47, 17, 67, -18, 13, 24, 13, 37, 42, 
-18, -103, -2, -18, 45, 28, -58, 9, 15, 47, 23, -11, -53, -23, 47, -31, 
-21, 5, 26, 9, -15, -18, 71, 59, -44, -33, -62, 1, 48, -3, -27, -20, 
-6, 15, -9, 2, -16, -4, -6, -47, 26, 16, -4, 8, -44, -10, 71, 47, 
-21, -27, 57, 4, -28, 8, -49, -5, 44, 3, -64, 27, 68, -24, -50, 48, 
14, -58, 55, -30, -55, -24, 14, -29, 2, 41, -5, -7, 28, -46, -29, 8, 
-43, 16, 35, 58, 5, 17, 99, -68, -43, 82, -81, -25, -16, -27, -4, 20, 
-2, -85, 14, 68, 3, -9, 72, 25, -75, -17, -24, -16, 1, 13, -42, 57, 
38, -28, 31, 13, -18, -70, -29, 14, -27, -6, 15, 18, -21, -3, 32, 55, 
0, -15, -20, -31, 21, 25, 28, -6, -10, -3, 38, -25, -86, 18, 34, -63, 
-9, 16, -19, 8, -69, -29, 69, 56, -18, -69, -23, 1, 73, -53, -93, -9, 
16, -5, -37, 55, 101, 17, -44, -25, 20, 40, -16, -23, -6, -30, 40, 71, 
-25, 14, 29, 20, -21, -70, 12, -5, 28, 11, 28, 25, 11, -60, -17, -22, 
12, 63, -52, -22, 20, 31, -8, -4, -47, -84, 113, 9, -36, 5, -39, 31, 
-9, 39, 35, -66, 26, -17, -37, -6, 31, 44, 23, -32, 48, 43, -71, -3, 
-5, -12, 24, -9, -58, -10, 22, 10, -25, -48, 28, 41, 16, -48, -6, 13, 
-1, -25, -50, 29, -19, -6, 30, -9, 40, -18, -101, -21, 92, 42, -7, 18, 
-23, -33, 55, 25, 28, -64, -48, 24, -10, 19, 14, -25, -11, 20, -71, -5, 
45, -35, 24, -15, -53, 71, 19, -48, 3, -61, -21, 76, 19, -41, -50, 2, 
31, 74, 58, -56, -10, 39, -25, -107, 8, 74, -30, 43, 15, 8, 36, -61, 
24, 74, 5, -74, -33, -12, 3, 18, -60, 21, 12, -11, 46, 3, 39, -17, 
32, -19, -57, 3, 41, 18, 7, 64, -47, -50, 27, -7, 4, 43, -48, -7, 
20, -20, 46, 29, -20, -55, 71, -12, -22, 58, -16, -26, -2, 12, 9, -122, 
-10, 85, -64, 43, 18, 27, 1, -34, -37, -40, 25, -20, 40, 65, -23, -1, 
-1, -3, -49, -23, 30, 70, -36, -48, 44, -25, -30, -30, 26, -19, -34, 57, 
9, 34, -73, -21, 31, -50, 21, -75, -65, 40, -12, 22, 81, -44, -46, 127, 
-93, -23, 29, 19, -8, 7, 36, -89, -9, 52, -14, 20, 7, -35, -23, 53, 
-47, 33, 100, 6, -7, -62, 0, 18, 41, 0, 14, 61, -68, -13, -62, -29, 
15, 28, 25, -11, 2, 1, -12, 43, -33, -35, 46, -45, 11, 10, -61, -17, 
46, 43, -14, 4, -29, -4, 6, 34, -46, 43, 5, -32, 112, -11, -9, 36, 
-40, -10, 31, -49, -18, 15, -21, 3, 30, -45, 3, 9, -12, -9, -15, 49, 
-17, -13, -39, 2, 7, -50, 56, 1, -24, 17, -35, 43, 17, -88, -42, 72, 
-32, 2, 56, 3, -22, -3, -21, -42, 23, 20, -1, 9, 59, 26, -21, 47, 
-37, 1, 23, 11, -10, -23, 11, 42, -49, -45, 48, -58, 75, 60, -24, -10, 
57, -4, -44, 43, -17, -65, -31, 20, 41, 52, -10, -47, 6, -10, -47, 35, 
17, -36, -4, 31, -34, -10, 18, -52, 58, 35, 33, -3, -20, -15, -4, 37, 
-21, 5, -22, -83, 19, 68, 0, 11, 22, -17, 28, -37, 19, 47, -40, 17, 
-35, 6, 89, -10, -14, -19, 31, -6, -13, 49, -93, -9, 74, 6, -65, 76, 
-90, -17, 75, -34, 4, 60, -4, -67, 32, 54, -34, 5, -2, -72, 23, 55, 
-46, 31, 22, -3, -31, 0, -4, -30, -8, 45, 30, -12, 35, -13, -25, 43, 
31, -48, -8, -3, -22, -9, 41, -41, -20, 42, 19, 7, 5, -28, 10, 9, 
-37, 4, 8, 1, 14, -28, 25, 9, -29, -8, -1, 14, -62, -37, 15, 96, 
32, -67, 28, 3, 47, 0, -39, 16, -49, 25, -8, -8, 95, -19, -27, -35, 
-32, 3, -51, 31, -27, 38, 44, -21, 55, -38, 18, 54, -57, 30, 57, -50, 
22, 21, -47, -15, 53, -50, 14, -2, -36, 86, 71, -30, -33, -15, 0, 19, 
20, -62, -31, 52, 17, -9, 58, -61, -29, 21, -21, 12, -9, 1, -28, -2, 
65, -5, 10, -32, -21, 3, -10, 27, 10, 44, 47, -76, -105, 63, -28, -14, 
54, -22, -19, 67, -65, -36, 73, 8, -63, 50, 2, 17, 54, -89, 19, 21, 
46, -9, -50, -10, -13, 42, -41, -7, 80, -42, 29, -10, -63, 41, 12, -10, 
-41, -3, 16, 30, 22, -45, 25, -8, 43, 58, -28, -25, -25, -1, -2, -12, 
73, -23, -74, -33, 42, 65, 27, 0, -101, 2, 70, -24, 13, 58, 0, -79, 
-46, -9, 45, -3, -26, 26, -19, 31, 25, -28, 40, -8, 31, 25, -57, 31, 
19, -36, 52, 12, -96, -15, 107, -35, -11, 86, -62, -50, 74, -10, -37, -3, 
44, -13, 33, -21, -85, 19, 24, 28, -1, 3, 46, -38, -4, -11, 21, 41, 
-67, 18, 20, -50, 21, 14, 22, -19, 10, 3, 3, 71, -6, -47, -32, 44, 
-10, -3, 60, -33, -13, -23, -67, 18, -10, 39, 19, -49, -2, -28, -19, 30, 
34, -38, -39, 29, -7, -9, 27, -47, -35, 2, 3, 47, -58, -24, 80, -45, 
-62, 71, -7, -11, -10, -39, -10, 51, -20, -38, -3, -61, 60, 39, -30, 7, 
-60, -11, 35, -1, 38, -18, 2, 10, -31, 44, -2, -22, -4, -16, -18, -14, 
35, -13, -23, 45, 39, 27, -39, -59, 20, 13, -37, -2, -20, 29, 27, -15, 
-11, -27, -16, 48, 14, -90, 5, 48, -49, 25, -42, -78, 62, -11, -73, 42, 
60, -60, -48, 78, -1, -3, 30, -32, -12, 31, -16, 8, -3, 12, 13, -33, 
10, 15, 8, 13, 0, -1, 16, -10, -43, -31, 34, -25, -12, 85, 25, 23, 
-33, 0, 46, -21, 13, 29, -22, -40, 41, 76, 0, -62, -28, -16, 1, -25, 
-59, -5, -20, -6, 34, 59, 61, -40, -14, 12, -17, 49, -33, 12, 31, -24, 
-26, -37, 70, -11, -14, 53, -9, -58, 13, 11, -63, -8, 14, 11, -3, -17, 
7, 42, 13, 11, -41, -69, 55, 41, -98, -49, 1, -57, 35, 21, 5, 15, 
-14, -25, 8, 62, 7, -9, -18, -37, 6, 23, 30, 30, -7, -63, -60, 79, 
-33, -5, 15, -41, 51, 12, -53, -3, 15, 42, -25, -21, 11, -4, 50, -35, 
-37, 30, -83, -62, 22, 46, 27, -10, 29, -22, -25, -8, -12, 69, 8, -5, 
-1, -13, 2, 21, -16, 63, 30, -81, -35, -22, 13, -16, 62, 43, -106, 54, 
76, -21, -46, 33, 11, -81, 28, 70, -38, 11, 27, 12, -33, -9, 12, -69, 
8, 49, -11, -13, -15, 25, 10, -20, 61, 45, -20, 36, -33, -35, 40, -2, 
36, 46, -89, -24, 67, -26, -6, 19, -3, -46, -12, 23, 23, -58, -30, 64, 
37, -9, 0, -18, -14, 4, 10, 66, -6, -7, 18, -44, 14, 60, 12, -52, 
-39, -3, -54, 42, 39, -11, 32, 11, -22, -27, 62, -14, -93, 14, 51, 31, 
-24, -5, -14, -28, -31, 20, 33, -34, -12, 2, 28, 34, 32, -6, -43, 0, 
-10, 40, 31, 34, -10, -38, 1, -26, 18, -18, -5, 12, -37, -25, 51, 17, 
-46, 7, -11, -33, 71, 9, -80, 11, 54, -39, 13, 32, -46, -44, 69, 23, 
7, 47, -39, -70, -28, 47, 30, -6, -7, 6, 9, 3, 22, 9, 14, 8, 
-37, -7, 14, 29, -60, -67, 20, 51, 39, -69, -36, 26, 25, 34, -11, -42, 
8, 3, -20, 57, 7, -31, -2, -35, 5, 61, 56, -18, -71, 0, 30, 19, 
46, 54, -20, -3, 51, -8, -7, 16, -55, -13, 7, 19, 45, 10, -41, 44, 
10, -41, 25, 19, -80, -5, 21, -35, 75, -36, -54, 19, 11, 16, 4, 36, 
-7, -70, -2, -8, 22, 81, -30, -73, -8, -16, 33, 15, 23, 19, -16, 44, 
-32, -30, -25, 18, 19, -25, 2, -24, -11, 16, -2, -38, 4, 22, -20, -10, 
29, -15, 28, -9, -28, 13, 46, 48, -52, -57, 28, 16, 4, -8, -34, 25, 
-18, -69, 32, 37, 42, -1, -56, 17, 77, -2, -30, -6, -7, 0, 14, -1, 
-4, 19, -41, 28, 31, -17, -17, 4, -22, -15, 47, 2, -39, 23, -12, -9, 
18, 10, 47, -3, -19, 50, -16, -33, 6, 30, -27, -58, 22, 41, 23, 89, 
-41, -84, 20, -44, -53, 44, -21, -12, -35, 0, -13, 22, 22, -70, -2, 51, 
-24, -44, 48, 27, -52, 10, -32, -13, -5, 7, 12, 20, 27, 18, -11, -36, 
-18, -26, 19, 28, 8, 18, -21, 20, 26, -11, -9, -55, 69, -15, -29, 32, 
-48, -6, 40, -22, -48, 41, 28, -65, -18, 47, 45, -3, -4, -4, 24, -18, 
-5, 55, 35, -3, -20, -63, -32, 30, 4, -7, 2, 20, -10, -39, 32, -11, 
-27, 43, 25, -31, 48, -8, -64, 23, -10, -15, 15, -26, 47, 36, -58, 26, 
21, -23, 21, -19, -41, 41, -15, -68, -29, 73, -61, -17, 68, -19, -4, 29, 
-37, -28, 22, 53, -59, -4, 12, -48, 52, 14, -69, 40, -14, 6, 71, -25, 
-54, 9, 35, 58, -1, -52, -16, -6, 35, 5, -25, 19, -1, -45, 36, 59, 
-31, -43, 6, -3, -36, 34, -8, -51, 50, -7, -34, -56, 7, 14, -11, 29, 
-46, -28, 92, -49, -43, 28, -5, 3, -11, -32, 53, 5, -47, 49, -46, -51, 
97, 26, -25, 5, -31, -29, 11, -30, -44, 91, -20, -71, 5, 39, -46, 53, 
13, -70, -33, 7, 25, 25, 5, -74, -26, 100, -55, -47, 76, -10, -50, 11, 
13, 10, 6, 6, -33, 44, -63, -56, 18, -1, 19, -30, 52, -7, -25, 44, 
-38, 10, 96, 45, -66, -21, 16, 6, 64, -47, -76, 11, -58, -26, 28, 41, 
25, 2, 49, -44, -51, -25, 40, 50, -59, 35, 32, -20, -15, 39, -60, 32, 
-6, -90, 60, 48, 4, -102, 28, 86, -91, 81, -41, -35, 91, -54, 25, 67, 
-33, -35, -21, -25, 38, 46, -36, -23, 45, 16, -40, 10, 12, -71, 64, -44, 
-29, 28, -68, 54, 0, -2, 41, -5, 84, 24, -53, 46, -33, -50, 10, 37, 
-14, -104, -12, 39, 6, 15, 4, 43, 17, -83, -67, 15, 30, 68, -9, -5, 
6, 24, 2, -52, 42, 6, -35, 3, 9, 26, 13, 33, -71, -48, 9, 9, 
39, -3, 5, 56, 22, 13, 4, -13, -22, -66, -29, 53, 25, 2, 6, -23, 
-7, 1, 13, 18, -15, -5, -54, -29, 98, -87, -10, 104, -22, -17, -43, -11, 
7, -36, 24, -8, 32, 8, -33, 47, -21, -95, 77, 66, -1, -33, 4, -25, 
-15, 7, 10, 13, -9, -36, -8, 57, 34, 19, -24, -37, -26, -23, 27, 0, 
85, -44, -68, 43, -19, -13, 19, 1, -16, -16, 51, 32, -29, 2, -36, -38, 
19, -30, -10, 9, 3, 46, -5, 31, 79, -55, 12, 15, -77, 50, -8, 16, 
-35, -71, 93, 11, -53, -49, 20, 44, -49, 40, -56, -24, 85, -48, 4, 70, 
-8, -38, 34, -7, -12, -9, 10, 2, -29, 13, 41, -17, -8, 45, -17, -5, 
6, 28, 26, -23, -25, -6, -7, 6, -39, -7, 6, -52, 5, 16, 59, -25, 
-38, -10, -71, -20, 87, -23, -43, 4, 6, 22, 28, -43, -49, 32, 75, 21, 
-30, -4, 11, -50, -14, 5, -1, 95, 51, -25, -58, 5, 3, -52, 25, -5, 
-78, 70, -6, 0, 31, -35, -14, 48, -48, -56, 30, 30, -1, -55, 14, 30, 
35, 13, -56, -48, 38, 41, 25, 62, -46, 18, 4, 11, -15, -62, 27, 8, 
5, 59, -24, -13, 46, 28, -12, -33, -1, 13, 39, -19, 21, -31, -45, -3, 
22, -28, -36, 86, -32, 0, -64, 24, 50, -35, 27, 15, -2, -6, 16, 32, 
2, -76, 18, 0, -45, 88, 33, -57, -6, 65, -10, -28, 49, 9, -91, 32, 
71, -49, 6, -15, -41, -15, 35, -5, -12, 12, 38, -42, 15, 51, -5, 7, 
-54, -44, 58, 65, 18, -53, -14, -6, -4, 48, -11, -32, 45, -57, -2, 69, 
46, 21, -33, 1, 8, 1, 43, 27, -76, -47, 21, 22, -37, -28, 33, -34, 
-65, -15, 34, -47, 45, 68, -49, 21, 28, -47, 36, -3, 32, 61, -43, 38, 
-32, -58, 61, 28, 28, -26, -53, 40, 16, -38, 53, -38, -46, 42, 26, -9, 
-8, 15, 6, 9, -38, 32, 24, -43, -6, -16, -60, 38, 47, -6, 17, -30, 
-43, -41, 34, 21, -6, 63, -43, 1, -21, 58, 32, -46, 8, -14, 78, 12, 
-54, -43, -5, 16, -58, -22, 22, 31, 63, 4, -33, -39, -26, 18, -25, 38, 
-3, -18, 49, -90, -15, 56, 50, -3, 5, -83, 31, 60, -82, 36, -15, -15, 
11, -20, 14, 11, -11, -41, -8, 62, -16, 26, -19, -68, -1, 11, 34, 19, 
-43, -31, 67, 3, -56, 48, -2, -2, 30, -42, 4, 67, -47, -35, 33, -6, 
-39, 38, -2, 29, 46, -41, 3, 16, 12, -61, -14, 6, -2, 32, -16, -18, 
39, -41, 27, 18, -70, 46, -1, -57, -29, -12, 23, 21, 35, -17, -12, -25, 
-22, 22, 7, 89, 1, -71, -23, 36, -53, -20, 31, -9, 27, -21, -36, -50, 
80, 63, -67, 42, -18, -25, -3, 20, -5, -8, 44, 6, -45, 23, -24, -65, 
-53, 14, 51, 18, 22, -27, 20, -2, -74, 28, 36, 80, 48, -38, -53, 53, 
28, -44, 24, -60, -43, 56, -31, -21, -37, -39, 50, 40, -68, -5, 42, 18, 
-31, -6, 68, -21, -16, 49, -53, 1, 21, 1, 35, -51, -34, 30, -5, 19, 
-14, 13, 47, -28, 14, 28, -20, -27, -4, 24, 81, 5, -18, 41, -3, -8, 
1, -2, -9, 63, -21, -54, 4, 16, -70, 18, 67, -53, 44, -8, 4, -31, 
3, 78, -38, -49, 25, 16, -38, 51, 14, -33, -50, -11, -4, 2, -2, -10, 
11, -37, 19, 70, -35, 4, 35, -38, -32, 35, 74, 8, -26, -9, -44, 67, 
60, -41, -111, 4, 48, -15, 33, -11, 3, -15, -2, 11, -11, 17, -4, -15, 
5, -23, 28, 50, -54, -34, 55, -34, 4, 1, -64, 53, 22, 3, 22, -11, 
-1, -47, -22, 29, 10, -16, 29, 30, -65, -6, 43, -32, -10, 75, -11, -59, 
38, -12, 35, 49, -25, -8, -14, -40, 20, 74, -33, 0, 53, -63, 43, 35, 
-43, -37, 88, -20, 7, 66, -40, -93, -15, 23, 18, 43, -9, 14, -23, 23, 
-49, -10, 84, -90, -2, -17, 48, 54, 4, 11, -31, -27, -12, 73, -37, 15, 
-20, 12, 82, -1, -50, -36, -20, 32, 38, 29, 26, -64, 71, -18, -15, 32, 
-27, 6, -17, 36, -13, -22, 23, -41, 32, 46, -6, 6, -63, -77, -30, 52, 
66, -24, -64, -45, 50, 3, 0, 55, -72, -1, -4, -6, 22, -59, -39, 21, 
57, 24, -25, -4, 2, -19, 12, -11, 13, -3, -30, 29, 14, -30, 39, 48, 
8, -25, -36, 18, 8, -22, -21, 11, -18, -38, 74, 24, -41, 15, -61, 65, 
2, -41, -24, -38, 26, -36, 45, 22, 33, 16, -58, 13, 69, 32, -38, 6, 
-14, -7, 48, 20, -43, -14, -73, -28, 51, 37, -1, -8, -22, -3, -8, 3, 
-36, -9, 71, -1, -70, 26, 12, -58, 26, -24, -52, 84, -24, -65, -22, 32, 
45, 3, 43, -42, -61, 44, 66, -7, -47, -47, 33, 49, -22, -22, 23, 19, 
6, -5, -14, -22, -61, 35, -14, -33, 35, -76, 11, 45, 8, -16, 35, -6, 
-18, -20, -49, 94, -1, 24, 8, -66, 41, -24, -14, -55, -21, 51, 11, -26, 
-10, 39, -4, 16, -6, -8, -12, 41, -59, -19, 29, -89, 7, 5, 22, -46, 
63, 0, -22, 29, -12, -31, 8, 74, -39, -7, 23, -4, 1, 26, 27, -67, 
14, 66, -18, -92, 20, 3, 61, -8, -77, 18, -2, 24, 0, -20, -33, 3, 
0, 19, 19, -92, -6, 53, -48, 2, 39, 45, 18, -61, -4, 32, -40, -12, 
30, 15, -10, -12, -9, -2, -13, 81, -7, -27, -20, -98, 29, 60, -46, 62, 
-22, -30, 71, -23, -8, -29, -11, -20, -33, 89, -35, -37, 26, -40, -42, 39, 
-5, -17, -7, 34, -12, -50, -13, 36, 34, -25, 5, 11, 12, 6, 9, -8, 
-28, -35, 8, 48, -28, 14, 30, -24, -49, 5, -2, 27, 37, -16, -29, 0, 
-10, -21, 67, 5, -28, -46, 62, 8, -8, 34, -31, 15, -72, 24, 65, -11, 
16, -6, -41, -13, 41, 32, -28, -2, -8, -46, 24, -13, -49, 41, -25, 9, 
0, -19, 17, -47, -1, 33, 5, 5, 2, -80, -38, 54, 33, 47, -22, -17, 
-21, 9, 7, 18, 20, -3, 6, -45, 35, -7, -47, -15, -10, 6, 33, 33, 
-12, -66, 17, 27, -28, 96, -48, -43, 65, -62, 42, -32, -40, 87, -71, -34, 
73, -42, -18, 29, 9, -9, -14, -9, 8, -28, 4, -3, 46, -38, -14, 66, 
-1, 14, 37, -34, -35, 11, -4, 17, -12, 64, -36, -32, -15, -30, 33, -17, 
16, 14, -43, -15, 15, 30, 23, -29, 5, -24, 46, 36, -22, -9, -12, 11, 
-39, -3, -7, 20, 7, -15, 41, -2, -7, 4, 3, 38, 8, -74, 82, 35, 
-89, 0, 69, 3, -12, -27, -76, 64, 47, -8, 15, -20, -21, -46, 38, 22, 
-20, -6, 2, -54, 64, 54, 17, 20, -39, -78, -7, 62, 32, -6, -10, -49, 
-7, 50, 27, -6, -42, 9, 31, -45, -72, 16, 34, 55, -50, -5, 38, -35, 
49, -63, -25, 53, -13, -37, 21, -50, -8, 44, 29, 30, -43, -4, 62, -31, 
-60, 55, -32, 26, 7, -21, 4, -28, 48, 14, -43, -11, -3, 53, 49, -65, 
-22, 21, 3, 40, -37, 0, 28, 13, -24, -36, -6, 32, 1, -75, 58, 17, 
-23, 13, 16, -1, 23, 1, 2, 13, -45, 22, -6, -11, 9, 31, -29, -15, 
42, 6, 18, -55, 10, 14, 13, 21, -86, 15, 5, 23, -18, -48, 37, -19, 
-10, 11, -1, -37, 25, 47, -24, 29, -1, 10, -42, -6, 20, 11, 32, 35, 
-32, -18, 41, -47, -3, 84, -3, -38, 7, 57, 31, -82, 82, 11, -40, -27, 
-75, -10, 71, 14, -26, -4, -6, 10, 35, 0, -69, 53, 56, -54, -30, -17, 
31, 11, 4, -43, 14, 40, 31, -32, 13, -33, -55, 42, 23, -30, 59, 27, 
-31, 20, -6, -36, 15, 7, -50, 4, 58, 9, 3, 0, -1, -83, 3, -34, 
-13, 65, 15, 26, -39, 1, -50, -19, 27, -38, -9, 48, 55, -39, -26, 18, 
12, 16, 5, -16, -23, -36, 78, -39, -2, 54, -62, 48, 47, 39, -44, -53, 
6, 23, -16, 19, -6, -45, 43, -85, -10, 10, -47, 7, 46, 27, -44, -3, 
-5, -44, 52, -60, -25, 111, 3, -63, 52, -19, 18, -22, -11, -10, -17, 20, 
-6, 45, -23, -38, 89, 35, -15, -31, -16, -8, 1, 22, 3, -14, 5, 4, 
-55, -11, 30, 39, -49, -33, -39, 11, 56, 13, -17, -72, -8, 9, 55, -5, 
23, -28, -43, 26, 8, -19, -34, 34, 44, 6, -76, 78, 25, -32, 20, -40, 
57, -26, -15, 28, -1, 25, -26, -55, -6, -9, 4, -21, -18, -2, -14, 21, 
-33, 46, -11, -55, 19, 39, 13, -6, 14, 9, 16, 55, -20, -64, 18, 7, 
-55, 12, -24, -27, 60, 13, 11, 0, -6, -33, -36, 12, 8, 29, -39, 51, 
13, -62, 23, -4, 36, -7, -44, -19, -51, 78, -47, -49, 67, -20, 29, -48, 
-23, 30, -7, 24, 0, -41, -3, 47, 20, -20, -28, -59, -24, 91, -19, 21, 
18, -34, 44, -8, -22, -37, -20, 30, 22, 25, -7, -14, 9, -10, 91, 51, 
-83, 58, 28, -36, 39, 67, -70, -59, 40, 9, -2, 70, -49, -41, -15, 28, 
7, 17, -32, -24, 1, -29, 18, 22, -44, -8, 6, -39, 15, -40, 5, 33, 
70, 53, -72, -62, 9, 28, 32, -26, -14, 32, 11, 79, -22, -38, -47, 7, 
-18, 23, 94, -68, 94, 13, -90, 13, 37, -35, -21, -7, 20, -23, 36, 61, 
-52, -83, 41, -1, -14, 64, -20, -17, 3, 43, -56, 77, 24, -60, 35, -48, 
32, 33, 31, 1, -38, 1, -13, 9, 8, -56, 38, -31, -45, -1, 15, 18, 
10, 13, -91, 55, 87, -76, 45, 44, -76, -17, 39, -8, -30, 52, 0, -21, 
51, -31, 20, -44, 23, 40, 9, -32, -9, 36, -81, 11, 75, -23, 52, -58, 
-47, 27, -3, 98, -37, -37, 52, -68, 27, 39, -27, 32, 5, -30, -26, -37, 
-10, -32, 45, -9, -21, 41, -12, -18, 72, -66, -19, 73, -16, -33, 13, 0, 
-50, -1, 66, 32, -35, -3, -4, -1, 9, -49, 32, 35, -1, -4, -48, -39, 
50, 4, 4, -3, -8, 5, -28, 13, 31, -41, -41, 28, -65, -2, 74, 1, 
14, -19, -31, 81, 15, -79, 23, -54, 11, 86, 9, -35, 18, 26, -40, -7, 
26, -12, 42, -43, -72, 2, 25, 46, -50, -40, 15, 16, 64, -76, 30, 25, 
16, 52, -63, -14, -11, 46, -23, -16, 54, -42, -63, 2, -8, -42, 126, 1, 
-117, -10, 51, -13, 86, -34, -58, -5, -12, -21, -45, 88, 38, -67, -12, 47, 
-59, -34, 32, -28, 7, 120, 32, -113, 3, -9, -16, 104, 33, -68, -77, 64, 
-64, -3, 92, -12, 24, -90, 6, 60, 6, 48, -27, 21, 43, -30, -15, 29, 
-51, -35, 68, 34, 12, 43, -70, -85, 40, 34, -14, 58, -16, 9, -38, -38, 
75, -22, 27, -23, -22, 28, 16, -14, -58, 12, 45, 14, -66, 39, 21, 5, 
48, -5, -44, 27, -17, -37, -29, 15, 29, -70, 43, 29, -83, 19, 51, -74, 
-38, 65, 1, -9, 82, -37, -58, 12, 5, -7, -2, 43, -29, 6, 32, -18, 
19, -22, 15, -14, 11, 27, -17, -2, 45, -31, -45, -3, -7, 66, -24, 11, 
-24, -45, 15, -23, 41, 3, 32, -65, -30, 82, -25, 6, 35, 26, -45, -60, 
41, -86, 54, 83, -60, 17, -34, -81, 90, 68, -89, -24, 1, 15, -32, 37, 
63, -106, 39, 46, -31, -16, 43, -57, 27, 31, -69, 18, 61, 12, -16, 4, 
20, -42, -26, 45, -13, -10, -3, -43, 50, 61, -1, -67, -2, 1, -24, 43, 
-42, -5, 23, 9, -57, -7, 99, -4, -29, 4, -70, 42, 92, -66, -22, -3, 
-49, -28, 4, 72, 45, -4, -38, -19, 48, 51, -59, -18, -3, -7, 26, 9, 
-10, -35, -39, 19, 29, 5, 42, -9, -38, 10, -10, -6, -20, -23, 16, 31, 
51, -49, 18, -28, -9, 82, -63, 27, 23, -24, 1, -15, -1, 58, 14, -68, 
-34, 55, 2, -33, 7, 29, 49, -75, -45, 52, 2, -5, -26, -15, 48, -44, 
-22, 90, 0, -50, 56, 48, -32, -12, -42, -11, 44, -31, 29, 59, -37, -1, 
42, -20, -23, 39, -2, 16, -31, 7, 52, -59, -71, 7, 5, 13, 58, -11, 
27, 3, -72, -17, 33, 29, -14, -80, -33, 44, 1, -4, 5, -37, 12, 0, 
11, 17, -6, 18, 4, -18, -14, 42, -28, 24, 43, -3, 30, -40, -26, -8, 
42, -26, -21, -11, -31, 36, 37, -59, -60, 23, 12, 34, -18, 14, 34, -76, 
39, 16, -25, 65, -66, -62, 45, 37, 25, -50, -32, 32, -8, -2, -10, 9, 
1, -6, 26, -36, -58, 37, 21, -13, 0, 13, -5, -9, -27, -59, 101, -63, 
-24, 46, -5, -47, 10, 31, -35, 20, 27, -52, 44, 85, -45, -38, 45, -28, 
45, -47, -89, 97, -8, 28, 8, -15, 29, -48, -2, 2, 3, -16, 49, -4, 
-44, -23, 42, 64, 10, 1, -73, 26, 25, -43, -9, -35, 46, 64, -49, -35, 
1, 49, 8, 7, -23, -75, 56, -40, -31, 41, -33, 26, 22, -72, -5, 0, 
-32, 5, 28, 46, -39, -38, -10, -50, 53, 15, 21, 45, -49, 18, 62, 12, 
20, -62, -25, 10, -20, -15, -7, 77, 10, -67, 27, 47, -22, -12, -33, -15, 
-32, 24, 42, -34, 5, -35, 22, 2, -34, 11, 29, -5, -65, 9, 13, -27, 
25, 38, 24, -26, -10, -30, 49, 18, -37, 7, -2, 24, 17, -28, -45, 20, 
-12, -6, 12, -2, 44, 35, -44, -17, -27, 13, 45, -19, -38, 3, 0, -7, 
49, -74, -3, 58, -59, 35, 41, -68, -11, 36, 65, -50, 44, 1, -19, 37, 
8, -25, 29, 7, -4, 23, 22, 4, -2, 98, 29, -64, -16, -72, 13, 90, 
-45, -27, 62, -9, -18, -37, 41, 8, -60, -27, -34, 31, 64, 31, -93, -48, 
14, 66, 50, -33, -4, 34, 15, -52, -11, 52, -8, -41, -13, 14, 61, -35, 
-44, 10, 4, 91, 23, -51, 0, -15, 12, 3, 3, 9, 21, -17, -25, -18, 
-2, 44, -50, -19, 31, -27, 16, -13, -12, 11, 53, 23, -52, 42, -2, -29, 
20, -17, 21, 1, -23, -16, 13, 3, 12, 14, -49, 5, -24, 56, 33, 1, 
16, -104, 76, 16, -13, -16, 10, 7, -21, 92, -19, -36, 4, 2, -11, -53, 
10, -5, -22, 34, -55, 26, 62, 10, 27, -79, -19, 54, 36, -3, -17, -32, 
-29, 30, 50, 5, -34, -41, -37, 25, 40, -15, 28, -29, 0, 33, -11, -12, 
-37, 14, 18, 6, 18, -49, 7, 10, -15, 36, 10, 9, 4, -51, -18, 32, 
19, 1, -44, -11, 40, 14, 33, -27, -30, 9, -48, -9, 24, -84, 45, 59, 
-39, -34, -2, 41, -52, -16, 18, -41, 55, 63, 2, -46, -4, -6, -56, 37, 
80, -43, 1, -8, -8, 52, -9, 7, -20, -67, -3, 24, 41, 6, 10, -16, 
-20, 18, -17, -2, -1, 11, -12, 28, 12, -29, 25, 19, 5, 8, 25, -67, 
68, 22, -43, 33, -5, 15, -26, -39, -1, -4, 41, -32, -27, 38, -42, 26, 
-17, -42, 49, 27, -41, -8, 3, -19, 41, -2, -2, 10, -36, 9, 22, -2, 
-43, 32, -28, -15, 44, -44, 20, 32, 16, 3, 3, 17, -4, -2, -15, -12, 
2, -20, 18, 79, -2, -62, -41, -11, 16, 29, -4, -18, -26, 21, 21, -1, 
-29, -30, 40, -64, -36, 20, 54, 43, -9, -2, -57, -39, 27, 24, -30, -27, 
-25, 33, 52, -7, 5, -28, 19, 70, -26, -27, 5, -7, -24, -18, 26, 58, 
-28, -54, 10, 5, -10, -3, 32, 18, -26, -44, 33, 20, 22, 12, -49, 19, 
-27, -11, 23, 5, -22, -34, 23, 37, 28, -3, -23, 5, 19, 6, 6, -3, 
2, -11, -15, -2, -2, -16, -2, 40, -38, 15, 57, -52, 17, 20, -29, -22, 
45, -6, -2, 47, -44, -29, 41, -14, -42, 19, 40, -29, 3, 21, -27, -20, 
0, -2, -43, 45, -44, -33, 78, -22, 10, 44, 11, -50, -5, 47, -38, -26, 
-33, 29, 28, -7, -35, 23, 41, 20, 8, -31, 27, -18, -25, -2, 2, 41, 
2, -10, -7, -16, 3, 41, -5, -16, -14, -15, -14, 27, 52, 13, -18, -70, 
38, 41, -33, 6, 46, -70, 20, 48, -59, -36, 22, 37, -14, -33, -23, 10, 
33, -41, 13, -9, -6, 66, -19, 42, -9, -81, 19, 20, -6, 7, -16, -30, 
22, 64, -38, -1, -4, -8, -13, 15, -42, -22, 55, 6, 35, -51, 19, 22, 
-23, 19, -20, 27, -10, -40, -15, 36, -32, -33, 66, 53, -41, -11, -8, -35, 
23, 7, 27, 21, -62, -23, -8, 39, 60, -31, 3, 13, -45, -8, 38, -16, 
-16, 6, -24, -51, 16, 33, -26, -17, 16, -13, -13, 35, 35, -4, -19, -29, 
26, 19, -40, -14, 11, -3, -7, -20, 54, 16, -48, 41, -17, 13, 37, -8, 
-30, -15, -19, -11, 19, 6, -11, 28, 5, -13, 27, 12, -49, -18, 9, 37, 
38, -14, -20, 25, 2, -13, 25, 19, -30, -1, -23, 12, 72, -73, 9, -32, 
-49, 53, 19, -3, -39, -23, 37, 25, -24, 5, 28, 2, -7, 8, 10, -10, 
-8, -1, -62, 1, -14, -10, 57, 11, -16, 9, 32, -22, -6, -19, -6, 19, 
-35, 0, -20, -5, 28, 6, 20, 1, -33, -29, 40, -19, -1, 16, -32, -6, 
20, -1, -24, -1, 0, -47, 28, 39, 19, 26, -2, -6, -32, -26, 32, 59, 
-36, 4, 37, -46, 12, 34, -35, -15, 14, 29, 5, -32, 25, 19, 4, -30, 
-23, 46, -8, -17, 23, -12, -34, 22, -24, -8, 5, 12, 39, -69, -37, 50, 
36, -22, -18, -40, -41, 31, 22, 33, 36, -10, 20, -11, -29, 5, 4, -39, 
28, 26, -50, -10, 55, -47, -61, 35, 10, -6, 9, 13, 27, -49, -65, 12, 
-24, -20, 67, 6, -21, 3, -36, 13, 18, -21, -29, 17, -30, -25, -3, 47, 
0, 1, -3, -50, -23, 30, 9, -68, 4, 42, 9, -47, 5, 42, -1, 46, 
19, -38, 10, 18, 32, -3, -57, 51, 11, -40, 4, -2, 22, -19, -32, 28, 
28, -28, -11, -15, 4, -6, -8, 3, -16, 28, -36, -9, 30, 18, 23, 3, 
-10, -29, 3, -30, -5, 42, 3, -14, -11, -19, 11, 12, -30, -2, 40, -21, 
9, 12, -16, -11, -25, 41, 24, -15, 9, -10, 9, -8, -6, 20, 6, -8, 
-1, -12, -12, -31, -5, -4, -59, -8, 8, 53, 18, -6, 23, -1, 38, -32, 
-5, 50, -42, 5, 42, -20, 36, -9, 12, -14, -69, -2, 19, 17, 11, 0, 
42, -56, -15, 2, -43, 25, 16, 20, -20, -35, -3, -2, 50, -23, 19, 36, 
-19, -19, -39, 3, 28, 14, 0, -12, -38, 21, 7, -6, 13, -10, 29, -7, 
13, 19, -24, -14, -2, 7, 14, 7, -22, 20, 14, -8, 2, -46, 23, 63, 
-21, -51, 5, 9, 26, 32, -45, -36, 27, 18, -43, 1, -21, -6, 8, 25, 
16, -35, 43, -7, -20, 8, -14, 57, 5, -9, 13, -30, 25, 8, -25, -4, 
-47, 16, 63, -10, -17, -3, -15, 64, -28, -23, 23, -12, 28, -43, 46, 42, 
-37, -26, -13, 10, 23, 24, -24, -53, 14, 56, -27, -25, -5, 37, 3, -37, 
37, 12, -1, 19, 27, 7, -28, -3, 16, -26, -15, 24, 11, -55, 23, 10, 
-23, 11, -13, 36, 28, -15, -20, -30, -42, 57, 8, -20, -20, 2, 56, -43, 
-49, -2, 37, -17, 47, 5, -2, 2, -40, 13, -15, 19, 4, -12, -11, -26, 
31, 11, 2, -19, 19, -3, -70, 14, 17, -6, 23, -25, -14, 7, 19, -6, 
6, 9, -28, 3, 13, 2, -6, -1, 20, -14, -23, 4, -4, -22, -1, 13, 
-17, 23, 16, -9, 13, 14, -59, 39, 40, -27, -11, -14, 2, 1, -10, 25, 
-17, -6, -25, -32, 18, -4, 5, 5, -17, -20, 21, 34, 11, 13, -7, -26, 
-21, 35, 44, -52, -27, 44, -5, -17, 8, 25, 13, -19, 41, -6, -9, -39, 
-40, 49, 22, -2, 11, 3, -59, -25, 21, -13, 23, -14, -12, -4, -28, 10, 
12, -20, -50, 19, 35, -7, 44, -24, -16, 12, 1, 27, -37, -29, 9, 26, 
7, -28, 1, -6, 53, -17, 4, 72, 1, -3, -21, 13, 3, -41, -6, 4, 
-38, -23, 1, -10, 36, 17, -17, 30, 1, -36, -4, 31, -11, 8, -4, -10, 
9, -4, 2, -41, 23, 15, -13, 10, 2, 15, -4, 1, 1, -18, 11, 12, 
-16, 15, -2, -33, 39, 6, 13, -3, -34, -2, 3, -6, -2, -16, -30, 53, 
39, 0, -32, -16, 9, 5, -18, 0, 15, -9, 14, -10, 14, 22, -22, -14, 
-8, -28, -26, 12, 40, -29, -4, -5, -3, -1, -4, 28, 21, -8, -17, 35, 
-1, 16, -6, -53, 10, 9, -1, -14, -17, 4, -2, 20, 21, -4, -13, 6, 
-11, -23, 19, 4, -23, -19, -23, 32, 53, -10, -22, -38, 16, -10, -3, 31, 
-12, -13, -3, 10, -10, 22, -31, -16, 0, -22, 22, -13, 23, 34, -39, 7, 
5, -20, 18, 30, -57, 14, 67, -5, -35, -34, -1, 37, -1, -25, 8, 17, 
-13, 6, -29, -35, 51, 10, -36, -19, 0, 15, 20, 2, -8, -30, -25, -10, 
2, 61, 42, -35, -22, -12, -11, -16, 5, 21, -8, 8, -26, 2, 53, 26, 
-44, 31, 29, -23, 26, -9, -70, 25, -24, -5, 35, 17, -46, -22, 44, -8, 
-10, 30, -19, -17, 23, 4, -23, 14, -25, -21, 29, 30, -36, 24, 18, 30, 
37, -58, -57, 42, 12, -44, 4, 18, -16, -21, 16, 27, -1, 29, -34, 16, 
5, 5, 9, -44, 3, -8, 17, 41, -2, -16, 35, -21, -7, 10, -35, 34, 
-3, 22, 24, -33, -32, 9, 38, 4, -64, -7, 9, -34, 12, 25, 16, 7, 
-13, 8, -11, -36, 12, -15, 53, 16, -71, 19, 36, -30, -32, 32, 26, -37, 
10, -1, -23, 28, 26, -47, -38, 3, 17, 21, -29, 13, -30, -9, 34, -24, 
-12, 40, -21, -34, 2, -15, 16, 25, -11, -2, -8, 6, 0, -3, 9, 10, 
0, 4, -28, 15, 31, 15, 33, -4, -42, 18, 19, -32, 0, 24, -10, -2, 
3, 6, -24, 14, -10, -12, -41, -26, 44, 9, 2, 13, -28, -34, 37, -53, 
21, 60, -31, -29, -2, 19, -26, 13, 43, -41, 5, 15, 11, -24, -2, 14, 
1, 37, -43, -15, 68, 15, -53, -18, -3, 10, -8, 36, 1, -31, -35, -17, 
-5, 12, 23, -4, 39, -6, -7, 3, 2, 20, -45, -36, 22, 24, 10, -22, 
-15, 18, 28, -23, -11, 25, -14, -9, -23, 29, 7, -8, 28, -31, 18, 5, 
-14, -26, -7, -18, 15, 48, 13, -3, -52, 13, 30, -17, -18, 25, -15, 7, 
40, -7, -4, -14, 34, -12, -27, -4, -61, 26, 19, -2, 13, -14, -12, -11, 
31, -17, 5, 18, 6, -25, -23, 25, 18, 21, -14, -18, -16, 30, 23, 16, 
-36, -35, 25, 8, 7, 0, -22, -10, 10, -2, -5, 8, 9, 19, 10, -6, 
5, 5, -24, -7, 29, -9, -12, 1, -11, -18, -16, 56, 7, -9, -7, -27, 
2, 9, 15, -23, -3, -22, -31, 19, -11, -1, 33, -12, -12, 6, 8, 13, 
-20, 22, 12, -6, 24, -14, -37, 15, 10, 2, 17, -13, -16, -7, 27, 0, 
-15, -33, -5, 15, -3, -41, 9, 32, -19, -2, -8, 0, -3, 35, -4, -7, 
15, -3, -9, -7, 1, -2, -5, -8, 24, 20, 8, 2, -5, -9, 12, -6, 
-28, 19, 2, 20, 7, -15, 19, -7, -10, -6, -10, -31, 24, 3, 15, 2, 
-34, 22, -34, -11, -11, -8, 49, -3, -7, -17, -43, 24, 17, -35, 21, 26, 
25, -10, 25, -23, -32, 12, -3, 4, 10, -13, -4, -2, -27, -13, 3, 42, 
25, -39, -15, 15, 3, -25, -16, 34, -13, 19, -2, -12, 25, -20, 14, -28, 
-27, 36, -2, -28, 13, -10, 25, 8, -9, 8, -8, 36, 31, 3, -8, -11, 
3, 23, -39, -26, 11, -13, -15, 20, 26, -9, -4, 7, 7, -22, -13, 28, 
5, 6, 6, -44, 22, -2, 9, 25, -36, 28, 9, -15, -14, -11, -12, -20, 
-12, 29, 6, -4, 33, -18, -13, 26, -50, -21, 21, 13, -6, -7, 27, 9, 
22, -24, -11, 34, 10, -3, -26, 13, -9, 8, -6, -21, 33, 4, -3, 25, 
-26, -40, 28, 5, 25, -31, -37, 36, 1, 18, 5, -12, -27, -23, 26, -22, 
-7, 2, -22, 33, 9, 5, -2, -12, -19, -29, 44, 16, -25, -7, 38, -11, 
-1, 31, -17, -12, -9, -18, -13, 15, 41, -19, -40, 15, 13, 0, 1, -12, 
-27, 34, -19, -25, 28, 25, -40, 4, 3, 5, 34, -40, 6, 37, 10, -8, 
-5, 10, 12, 0, -24, -7, 20, -7, 13, 0, -49, -6, 4, -5, 13, 29, 
33, -14, -33, 38, 11, -15, 6, -16, 8, -14, -3, 11, 29, 44, -75, -28, 
18, -6, 4, 14, -44, 11, 33, -17, 15, -9, -12, -28, -6, 24, -13, -5, 
39, 0, -12, 41, -51, 0, 37, 0, -51, -11, -13, -18, 21, 10, 21, 7, 
-3, -24, 2, 23, 22, -25, -1, 10, -15, 3, -11, -10, -20, 8, -3, -21, 
13, -1, 13, 7, -4, -3, 10, 5, -10, 4, 25, -29, 9, 53, -30, -22, 
2, -22, 17, 9, 8, -23, 1, -13, -32, 58, 20, -21, 3, -13, 21, 16, 
-9, -30, -7, 1, 13, -21, -23, 23, 1, 4, -17, -1, 22, 22, -25, -36, 
-23, 30, 42, -27, 29, -16, -49, 23, 35, -15, 16, 20, -25, -34, 10, 11, 
-26, 0, 17, -6, 8, -13, -15, 27, 21, -22, -13, -9, 20, 9, -6, 18, 
-33, 8, -6, -23, -1, 0, 21, 3, 26, 9, -54, 43, -12, -30, 65, 9, 
-35, 15, 10, 0, -29, 1, -11, 1, 27, 19, -8, -14, -22, 6, 23, -31, 
14, 16, 1, -6, -43, 38, 28, -5, 7, -30, -22, 24, 18, -35, 29, 20, 
-23, 19, 7, -22, -4, 28, -9, -27, 37, -1, -6, -18, -8, -20, 45, -12, 
-25, 2, -2, 13, -16, 32, -18, -17, -1, 2, -9, 9, 29, -16, -21, 16, 
-6, -26, 22, 34, -7, -6, -21, -8, 29, -17, 17, -16, -12, 21, -47, -9, 
10, -8, 12, -15, -16, 1, 34, 10, -35, -7, 21, 20, 5, -16, -15, 8, 
-12, -10, 59, 23, -23, -7, -15, -21, 13, 26, 3, 13, -25, -29, 31, -11, 
-28, -2, 10, 14, -5, 12, 4, -19, -13, 9, 29, -37, -48, 27, -5, 2, 
-4, 39, 21, -20, 4, -27, -6, 16, 29, -7, 2, -25, 6, 24, -22, 16, 
-23, 8, 5, -17, 27, -28, -16, -2, 0, 34, -12, -34, -21, 17, 25, -12, 
-23, 1, 18, -27, -16, 0, 26, 10, -5, -6, -23, 24, -3, 2, -8, -7, 
-2, 5, 14, -21, -15, 8, 19, 4, -2, -8, 4, -4, -3, -2, -3, -20, 
12, -11, -35, 25, 10, 8, 2, -38, 22, 18, -21, -9, 34, 42, -16, -48, 
-7, 6, -4, 59, 6, -36, 19, -1, 0, -16, -5, 22, -4, 17, -11, -17, 
18, 4, 7, -15, 2, 15, -12, -6, -20, 12, 11, -7, -19, -17, 15, -4, 
6, 7, 2, 0, 2, -6, -4, 18, -23, -23, 16, 0, 4, -5, -16, 4, 
20, -11, -5, 11, -1, -8, -7, 13, 11, 0, 5, -16, -26, 5, -3, 13, 
12, -20, 8, -27, -1, 38, -41, 2, -1, -12, -4, 16, -6, -28, 10, 7, 
-10, 9, 10, -7, 3, 13, -4, -6, 11, 0, -5, 3, -4, -3, 10, 9, 
-11, 4, -4, -15, -2, 27, -5, -33, 0, 11, 9, 12, 32, -34, -17, 4, 
-3, -23, 5, 4, -4, 7, -11, 14, 11, -17, -20, -12, 7, 26, -8, -14, 
1, 0, -3, -9, 9, -8, -9, 11, 9, 7, 10, -24, -14, 8, -12, 13, 
-5, 7, -10, -36, 14, 0, 11, 9, 7, -19, -36, 12, 5, 31, 4, -34, 
12, 16, -15, -6, 23, 27, -31, -20, 12, -14, 3, 12, 6, -7, -11, 18, 
-11, 15, -1, -29, 2, 24, 1, -12, 30, -5, 2, 14, -16, 14, -19, -10, 
-17, 1, 10, 19, -3, -24, 9, 3, -10, 4, 15, -31, -12, 6, -21, 40, 
21, -7, -3, -7, 14, -11, -4, 17, 13, 17, -54, -19, 37, -4, -30, 4, 
9, 10, -12, 4, 8, -17, -1, -7, -5, -2, 11, 5, -6, 0, -10, 4, 
20, -17, -14, 28, 12, -11, -16, 14, 6, -22, 10, -11, 11, 3, -2, -5, 
-18, 21, 13, 3, -5, 10, -9, -10, -8, -15, 20, 11, -10, 4, 1, -4, 
-8, -4, -17, -4, 8, 9, 25, -15, -29, -7, 11, 0, -14, 13, 3, -4, 
5, -1, -23, 3, 28, -2, -11, 3, -12, 4, 16, 7, -12, -6, 5, -20, 
-21, 9, 7, 0, -5, 3, 21, 3, -17, -4, 1, 8, -5, -9, 13, 7, 
6, -19, 7, 12, -21, -2, -2, 0, -4, 9, -25, 9, 29, -17, -5, 19, 
12, -33, -11, 39, -3, 3, -20, -20, 0, 3, 10, -3, 0, 1, 5, 6, 
-1, -5, 7, -9, -12, -6, -3, -2, 10, 20, -5, -13, 10, 24, 0, -25, 
-12, -7, 16, -5, 0, 9, -16, 5, -9, 5, -1, -6, 10, 7, 21, -21, 
-2, 13, -6, 14, -11, 3, -21, -11, 9, -15, 0, -5, 21, -9, -9, 0, 
9, 18, -15, -3, -10, 5, -3, 5, 14, -4, -16, -2, 7, -1, 14, -7, 
5, 0, 16, 18, -2, 21, -15, -26, -4, 18, -15, -12, 32, 6, -4, 8, 
-6, -15, -21, 2, 4, 5, -29, 0, 25, -9, -1, 4, -5, 2, -1, -28, 
-4, 4, -15, -7, -5, -2, 10, 25, -2, -4, 9, -1, -15, 17, 17, -26, 
-14, 12, 10, -3, -4, 3, 11, -3, -17, -9, -9, -4, 13, -17, 3, 3, 
3, 15, -14, 17, -2, 11, 9, -23, 11, 0, -4, -4, 3, -8, 17, -1, 
-13, -2, -15, -9, 14, 21, 1, -25, -20, 34, -5, -9, 7, -15, -12, 6, 
11, 1, -6, -5, -3, -4, -9, 4, -6, -14, 14, 5, 8, 9, 10, -9, 
-12, 15, -3, 3, 8, -15, 19, 5, -6, 4, 6, -22, -6, 18, 5, 5, 
2, -20, -10, 8, -10, 8, -3, -9, 2, 0, 4, -11, 3, -8, -5, -7, 
8, 12, -2, 4, -11, 7, -9, -4, 19, 6, 9, 7, 5, -8, -18, 1, 
1, 3, 20, -3, -10, -12, 1, 8, -5, -4, 7, 15, -6, -7, -3, -13, 
-3, 10, 13, -6, -8, -15, -6, 12, 18, -20, -18, 6, -9, 7, 6, -1, 
-4, -1, 33, -4, -24, 2, -19, 3, 13, -14, 21, 13, -13, -13, 7, 3, 
-1, 16, -8, 2, 3, 2, -17, -23, 15, -7, 2, -2, -15, 5, -5, 16, 
5, -9, 30, -12, -21, 10, 10, -7, -13, 5, 2, 7, -9, -10, -2, 16, 
11, -21, 22, 2, -13, -15, 2, 18, -4, -11, -10, 9, 3, 6, 1, -24, 
-1, 8, -4, -6, -11, -1, 7, 21, -19, -7, -2, -7, 2, 11, 6, -2, 
6, -7, -14, -4, 9, -13, 2, 19, -18, 9, 11, -15, 10, 12, -9, 5, 
-20, -12, 4, 6, 9, 1, 3, -17, -5, 12, -18, -3, 11, 4, 1, -4, 
-12, 1, 10, 5, -18, 1, 18, 0, -11, -9, -2, 9, 13, -13, -28, 1, 
31, -3, -4, -11, -6, 3, 1, 13, 7, -16, -10, 24, -21, -26, 2, -1, 
11, 10, -8, 1, -14, 2, 9, 6, -11, -12, 0, -8, -3, 18, 6, -15, 
1, 13, -1, -7, 9, 9, -15, -1, 12, 2, -1, -23, -2, 7, 15, -6, 
-11, 7, 2, -1, -6, 8, 6, 0, 4, 1, -21, 5, 11, -3, -7, 2, 
3, -6, -6, -6, 2, 1, -21, -7, 14, 10, -1, 1, 9, -5, -8, -5, 
-3, -4, 18, -1, 0, 6, -5, 27, -16, -9, 8, 10, -11, -3, 6, -15, 
0, -2, 5, -2, -1, 9, 4, -1, 1, -3, -14, 5, 2, 1, -5, -13, 
7, 3, 3, -4, -4, -1, 1, -7, 4, 3, 4, 15, -12, 8, -15, -5, 
9, -13, -5, 14, 4, -7, -7, 2, 3, -3, -3, -3, 11, 2, 1, -10, 
-6, 13, -6, -11, 13, 10, -10, -8, -6, -13, 23, 1, -5, 5, -6, 8, 
6, -16, -1, 3, -5, 6, -2, -4, -7, 9, 5, 4, -2, -5, -1, -8, 
2, 0, -9, -3, 6, -4, -5, -12, 9, 16, -11, -10, 2, 2, 2, 12, 
5, -5, 10, -16, -14, 11, 2, -2, 5, 6, 0, -6, -5, 2, -7, 5, 
7, -3, 13, -16, -8, 13, -8, -14, 2, -1, -12, 10, 9, -10, 17, -10, 
-11, 3, 5, -13, 4, 13, 2, -9, -2, -3, -8, -1, -10, 5, 3, -8, 
2, 5, 2, -3, -4, 12, -10, 0, 14, -14, 7, -5, -7, 1, 15, 0, 
-9, -2, -6, -3, -1, -3, -13, -10, -9, 5, 7, 6, 2, -3, 10, -14, 
9, 1, -6, 14, -3, -2, 2, -15, 6, 2, -13, 3, 9, -9, -11, 21, 
1, -25, 2, 4, 9, 3, 5, -1, -7, -1, -10, -6, 0, 6, 9, 3, 
-6, -11, 0, 6, -4, -7, 10, 15, -12, -1, -1, -3, 5, -9, 8, -5, 
0, 12, 2, 3, 3, 7, -1, -13, -18, 6, 8, -10, 5, 10, -9, -6, 
-4, 5, 1, -1, -8, 9, 0, -7, 8, -1, 5, -17, -4, 16, -14, -13, 
6, -5, 5, 9, -2, 1, 19, -3, -22, 4, 10, -9, 7, 15, -3, -9, 
6, -4, -3, 3, -4, -6, 3, -3, -7, 5, 11, 3, -10, -7, -10, -8, 
11, -3, 0, 0, 3, 7, -17, 19, 3, -7, 4, -5, 0, -4, 17, -11, 
-20, 14, -17, -3, 18, 4, -7, 5, -15, -5, 7, 2, -1, -5, 10, -7, 
-4, -2, -5, -1, -3, 7, -2, 2, 1, -7, -7, 4, 12, 1, -7, -1, 
7, -5, 1, -6, 4, 6, 0, 7, -10, 6, -9, -7, 8, -4, -4, -7, 
3, 14, -3, 0, 7, -12, 18, -2, -10, 3, -13, 8, 0, 0, 4, -11, 
-9, 5, 2, 0, 6, 5, -3, -5, -17, 11, 13, -7, 7, -11, -4, -2, 
8, 0, 0, 11, -15, -1, -4, 7, 5, -3, 4, -9, -4, 2, 0, 3, 
10, -6, -1, 0, -12, -3, -1, 1, -2, 11, -4, -11, -2, 6, 0, -7, 
-2, -1, -5, 6, -1, -4, -1, -11, 4, -1, 5, -5, -11, 8, 6, -5, 
3, 0, -17, -3, 5, -2, -2, 1, 10, -11, 2, 12, -14, -5, 12, 11, 
-1, -16, -2, -2, -2, 5, -6, 2, 7, -1, -15, 5, 11, -10, -7, 5, 
-5, 3, 14, 0, -8, -4, 6, -3, -8, 4, -1, 1, 1, -6, 7, -1, 
-4, 4, -3, 1, 2, -10, 1, -2, -4, -1, 0, 4, -4, 3, -5, 3, 
-1, -5, 2, -4, 2, -2, 0, -2, 2, 2, -3, -1, 1, 0, -1, 0, 
1, -3, 0, 0, 2, 1, -3, 1, 1, -1, -3, -1, 0, 0, 0, -1, 
-1, -1, 0, 0, -1, -1, 0, };
