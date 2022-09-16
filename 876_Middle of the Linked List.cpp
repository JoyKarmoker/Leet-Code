#include<bits/stdc++.h>
using namespace std;
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* current = head;
        int numberofElements = 0;
        int middlePos = 0;
        vector<ListNode*> nodePointer;
        
        while(current != NULL)
        {
            nodePointer.push_back(current);
            //printf("%d ", *current);
            numberofElements = numberofElements+1;
            current = current->next;
        }
        
        middlePos = numberofElements/2;

        //printf("\nnumber of elements = %d\n", numberofElements);
        /*for(int i=0; i<numberofElements; i++)
        {
            printf("%d ", *nodePointer[i]);
        }*/
        return nodePointer[middlePos];
        
    }
};