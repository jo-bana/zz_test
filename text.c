﻿#include <stdio.h>

char first[][256]={"失眠的夜里","光棍节","失恋了","无聊的周末","大病初愈","雷电交加的晚上","喝醉了酒","情人节晚上","等爱人出差了","吃饱以后"};
char second[][256]={"在浴池","在下水道","在小溪边","在马背上","在地毯上","在酒吧","在高中教室","在电影院","在公交上","在厕所"};
char third[][256]={"跟梦中情人","跟心中偶像","跟隔壁吴老二","跟猥琐怪蜀黍","跟大胖子","跟保洁阿姨","跟老奶奶","跟数学老师","跟初恋情人","跟无家可归的小女孩"};
char fourth[][256]={"唱《爱上一个不回家的人》","比赛吃蟑螂","紧紧地拥抱在一起","背靠背坐在一起","静静的看着彼此","接吻","憧憬你们美好的未来","一起光着身子跑来跑去","玩真心话大冒险","拉粑粑"};

main()
{
     int a;
     int ret;
     while(1)
     {
     printf("请输入你的手机号后四位:");
     ret = scanf("%d",&a);
     if(a>9999||a<0||0==ret)
     {
     printf("你的输入有误，系统退出！！！！！\n");
     return;
     }
     printf("本系统掐指一算，手机号后四位为%4d的朋友曾经发生过的故事:\n",a);
     printf("%s",first[a/1000]);
     printf("%s",second[a%1000/100]);
     printf("%s",third[a%100/10]);
     printf("%s",fourth[a%10]);
     printf("\n");
     }
}

