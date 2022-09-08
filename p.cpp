class Solution
{
public:
    int nearestValidPoint(int x, int y, vector<vector<int>> &points)
    {

        //         vector< pair <int,int> > vect;

        //         for(int i=0;i<points.size();i++){

        //             if(points[i][0]==x || points[i][1]==y){

        //             int x1 = points[i][0];
        //             int y1 = points[i][1];

        //             int ans = abs(x-x1) + abs(y-y1);

        //             vect.push_back( make_pair(ans,i) );
        //             }

        //         }

        //         if(vect.size()==0){
        //             return -1;
        //         }

        //         sort(vect.begin(),vect.end());

        //         return vect[0].second;

        int index = -1;
        int sd = INT_MAX;
        for (int i = 0; i < points.size(); i++)
        {

            if (points[i][0] == x || points[i][1] == y)
            {
                if (points[i][0] == x)
                {
                      if(sd>abs(y-points[i][1])){
                        sd = abs(y - points[i][1]);
                        index = i;
                            }
                }

                else
                {
                    if (sd > abs(x - points[i][0]))
                    {
                        sd = abs(x - points[i][0]);
                        index = i;
                    }
                }
            }
        }

        return index;}
    };