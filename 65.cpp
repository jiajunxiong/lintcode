    double findMedianSortedArrays(vector<int> &A, vector<int> &B) {
        // write your code here
        vector<int> AB;
        AB.reserve(A.size() + B.size());
        AB.insert(AB.end(), A.begin(), A.end());
        AB.insert(AB.end(), B.begin(), B.end());
        std::sort(AB.begin(), AB.end());
        return ((AB.size()%2==0) ? ((AB[AB.size()/2] + AB[AB.size()/2-1])/2.0) :AB[(AB.size()-1)/2] );
    }
