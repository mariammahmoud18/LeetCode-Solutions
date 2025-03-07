class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for(int i = 0; i < image.size(); i++){
            for(int j = 0; j < image.size()/2; j++ ){
                int temp = image[i][j];
            image[i][j] = image[i][image.size() - j - 1];
            image[i][image.size() - j - 1] = temp;
            if(image[i][j] == 0)
                image[i][j] = 1;
            else
                image[i][j] = 0;

            if( image[i][image.size() - j - 1] == 0)
                image[i][image.size() - j - 1] =1;
            else
                image[i][image.size() - j - 1] = 0;

    
            }
            if(image.size()%2 != 0){
                if(image[i][image.size()/2 ] == 0)
                image[i][image.size()/2 ] = 1;
                else image[i][image.size()/2 ] = 0;
            }
            
        }
        return image;

    }
};