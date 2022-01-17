/*
 * @lc app=leetcode.cn id=2 lang=cpp
 *
 * [2] 两数相加
 */
#include <iostream>
using namespace std;

// @lc code=start

//Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int en = 0;
        int rest = 0;
        int a = 0;
        int b = 0;

        ListNode *head = nullptr;
        ListNode *temp = nullptr;
        ListNode *new_ptr = nullptr;
        
        while (l1 != nullptr || l2 != nullptr || en == 1)    // 进位可能比原来的长度多一位
        {
      
            if (l1 != nullptr){
                a = l1->val;
                l1 = l1->next;
            }
            else{
                a = 0;
            }

            if (l2 != nullptr){
                b = l2->val;
                l2 = l2->next;   
            }
            else{
                b = 0;
            }
            
            int sum = (a + b) + en;
            rest = sum % 10;
            en = sum / 10;
            
            new_ptr = new ListNode();
            new_ptr->val = rest;
            if (head == nullptr){
                head = new_ptr;
                temp = new_ptr;
            }
            temp->next = new_ptr;
            temp = new_ptr;
        }

        temp->next = nullptr;       // 将尾节点的next指针设置为空
        temp = nullptr;
        new_ptr = nullptr;
        return head;
    }
};
// @lc code=end

