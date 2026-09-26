class Solution
{
public:
    bool check(int mid, vector<int> &piles, int given_hrs)
    {
        long long total_hrs = 0;
        for (int i = 0; i < piles.size(); i++)
        {
            total_hrs += (ceil(piles[i] * 1.0 / mid));
        }
        return total_hrs <= given_hrs;
    }
    int minEatingSpeed(vector<int> &piles, int h)
    {
        int lowestEatingSpeed = 1;
        int highEatingSpeed = *max_element(piles.begin(), piles.end());
        int minEatingSpeed = -1;
        while (lowestEatingSpeed <= highEatingSpeed)
        {
            int mid = (lowestEatingSpeed + (highEatingSpeed - lowestEatingSpeed) / 2);
            if (check(mid, piles, h))
            //designing this check fn is THE ONLY CHALLENGE 
            {
                minEatingSpeed = mid;
                highEatingSpeed = mid - 1;
            }
            else
            {
                lowestEatingSpeed = mid + 1;
            }
        }
        return minEatingSpeed;
    }
};