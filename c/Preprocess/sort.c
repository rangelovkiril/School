#include <stdio.h>

#define SORT(ARRAY, SIZE, TYPE, COMPARE)       \
    for (int i = 0; i < SIZE - 1; i++)         \
    {                                          \
        for (int j = 0; j < SIZE - i - 1; j++) \
        {                                      \
            if (ARRAY[j] COMPARE ARRAY[j + 1]) \
            {                                  \
                TYPE temp = ARRAY[j];          \
                ARRAY[j] = ARRAY[j + 1];       \
                ARRAY[j + 1] = temp;           \
            }                                  \
        }                                      \
    }

int main(int argc, char **argv, char **envp)
{
    int arr[500] = {9955, -9889, -9874, -9865, -9803, -9753, -9732, -9688, -9673, -9655, -9601, -9579, -9553, -9552, -9544, -9522, -9447, -9446, -9349, -9321, -9304, -9287, -9213, -9099, -9097, -9093, -9067, -8978, -8963, -8924, -8911, -8882, -8865, -8825, -8814, -8708, -8692, -8680, -8646, -8565, -8555, -8463, -8450, -8305, -8270, -8140, -8138, -8122, -8017, -7987, -7916, -7903, -7897, -7884, -7882, -7881, -7846, -7682, -7560, -7512, -7470, -7454, -7405, -7375, -7338, -7268, -7253, -7158, -7123, -7009, -6925, -6923, -6875, -6847, -6683, -6614, -6576, -6331, -6300, -6174, -6159, -6146, -6143, -6051, -6037, -6032, -6023, -6021, -6006, -5938, -5860, -5838, -5811, -5777, -5652, -5644, -5635, -5630, -5567, -5558, -5436, -5351, -5253, -5203, -5202, -5196, -5174, -5138, -5106, -5085, -5082, -5057, -5046, -4961, -4934, -4887, -4867, -4789, -4786, -4771, -4559, -4483, -4324, -4317, -4290, -4259, -4181, -4132, -4095, -3935, -3932, -3918, -3914, -3844, -3840, -3807, -3787, -3695, -3655, -3644, -3579, -3550, -3528, -3365, -3307, -3291, -3281, -3269, -3260, -3258, -3254, -3246, -3243, -3186, -3151, -3131, -3090, -2966, -2962, -2955, -2951, -2941, -2891, -2797, -2794, -2793, -2746, -2728, -2716, -2680, -2588, -2557, -2526, -2518, -2395, -2382, -2366, -2310, -2223, -2212, -2200, -2192, -2124, -2069, -2054, -2031, -2000, -1998, -1865, -1859, -1841, -1830, -1820, -1815, -1682, -1660, -1645, -1629, -1622, -1604, -1535, -1521, -1506, -1490, -1472, -1459, -1361, -1354, -1230, -1111, -1064, -1062, -951, -948, -917, -810, -725, -718, -675, -657, -635, -621, -617, -596, -589, -577, -575, -547, -535, -407, -360, -344, -310, -304, -299, -270, -218, -192, -143, -101, 16, 80, 135, 194, 268, 338, 340, 351, 359, 405, 432, 531, 555, 599, 617, 629, 769, 779, 829, 833, 919, 929, 965, 1021, 1079, 1091, 1098, 1124, 1164, 1181, 1195, 1224, 1275, 1294, 1331, 1387, 1448, 1458, 1477, 1536, 1572, 1573, 1592, 1671, 1694, 1705, 1711, 1755, 1778, 1792, 1870, 1930, 1933, 1938, 1953, 1961, 2043, 2054, 2065, 2080, 2088, 2091, 2173, 2196, 2211, 2274, 2296, 2304, 2318, 2325, 2336, 2404, 2425, 2443, 2463, 2655, 2661, 2666, 2714, 2732, 2919, 2957, 2996, 3006, 3018, 3022, 3039, 3050, 3085, 3141, 3143, 3148, 3175, 3197, 3209, 3224, 3244, 3301, 3386, 3434, 3446, 3456, 3483, 3509, 3580, 3595, 3646, 3697, 3788, 3828, 3940, 3942, 3985, 4031, 4043, 4047, 4054, 4081, 4112, 4132, 4210, 4246, 4365, 4425, 4468, 4482, 4507, 4509, 4601, 4602, 4624, 4656, 4702, 4737, 4755, 4765, 4773, 4792, 4796, 4810, 4902, 4917, 4924, 4962, 5036, 5058, 5081, 5101, 5105, 5111, 5169, 5225, 5238, 5254, 5315, 5331, 5342, 5435, 5448, 5549, 5578, 5640, 5687, 5725, 5753, 5756, 5758, 5793, 5804, 5820, 5883, 6005, 6031, 6035, 6043, 6053, 6068, 6118, 6123, 6132, 6135, 6237, 6318, 6382, 6434, 6507, 6569, 6669, 6749, 6776, 6782, 6860, 6902, 6917, 6958, 7102, 7110, 7119, 7163, 7196, 7264, 7366, 7368, 7370, 7397, 7408, 7463, 7468, 7527, 7617, 7634, 7664, 7690, 7691, 7710, 7731, 7790, 7900, 7915, 7983, 8014, 8025, 8028, 8063, 8185, 8243, 8336, 8359, 8432, 8445, 8499, 8573, 8673, 8788, 8793, 8803, 8888, 8941, 8979, 8984, 8989, 9047, 9049, 9248, 9350, 9400, 9530, 9552, 9559, 9590, 9651, 9710, 9762, 9769, 9824, 9854, 9871, 9956, 9970, 9998};

    int size = sizeof(arr) / sizeof(arr[0]);

    SORT(arr, size, int, <);

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}