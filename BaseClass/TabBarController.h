//
//  TabBarController.h
//  ocCrazy
//
//  Created by dong on 16/9/2.
//  Copyright © 2016年 dukai. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TabBarController : UITabBarController<UITabBarControllerDelegate>
+(TabBarController *)share;

-(void)tabBarControllerSelectIndex:(int)selectIndex;


@end
