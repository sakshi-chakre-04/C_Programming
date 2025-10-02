#include<stdio.h>
int main()
{
    int iValue1=0, iValue2=0, iAns=0;

    printf("Enter the first number : \n");
    scanf("%d",&iValue1);

    printf("Enter the second number : \n");
    scanf("%d",&iValue2);

    iAns=iValue1+iValue2;

    printf("Addition is : %d\n",iAns);

    return 0;
}

/*
🔹 Jab hum scanf("%d", &iValue1); likhte hain,
toh yahaan & (address-of operator) use hota hai.

iValue1 → ek variable hai jo value store karta hai (e.g. 10, 20, etc.).
&iValue1 → iska address (memory location) deta hai.

scanf ko address chahiye hota hai, kyunki usko us jagah pe jaake value store karni hai jo user input karega.

👉 Example soch:

Tere paas ek ghar ka address hai (&iValue1).
Us ghar ke andar ek dabba hai jisme value rakhi hai (iValue1).
Agar tu scanf ko sirf dabbe ka naam (iValue1) dega, toh usko nahi pata chalega ki value kahan rakhni hai.
Isiliye scanf ko address (&iValue1) dena padta hai, taki woh seedha memory ke us location par jaake value daal sake.

🔹 Agar tu scanf("%d", iValue1); likhega bina &, toh compiler bolega:
"Arre mujhe toh memory ka address chahiye tha jahan value rakhun, tu value de raha hai."

*/