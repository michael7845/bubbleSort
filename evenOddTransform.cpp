//https://i.ibb.co/fdjwFh3/image.png
//https://edabit.com/challenge/4YSyNPFzJfodySCSa
std::vector<int> evenOddTransform(std::vector<int> arr, int n) {
    for (int i = 0; i < n; i++) {
        for (int x = 0; x < arr.size(); x++) {
            if (arr[x] % 2 == 1) {
                //odd
                arr[x] += 2;
            }
            else {
                //even
                arr[x] -= 2;
            }
        }
    }
    return arr;
}
