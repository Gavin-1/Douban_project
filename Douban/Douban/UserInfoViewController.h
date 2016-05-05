//
//  UserInfoViewController.h
//  Douban
//
//  Created by YANG on 16/5/5.
//  Copyright © 2016年 唐家文. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UserInfoViewController : UIViewController
@property (weak, nonatomic) IBOutlet UIImageView *loainImage;
@property (weak, nonatomic) IBOutlet UILabel *usernameLabel;

@property (weak, nonatomic) IBOutlet UILabel *playedLabel;
@property (weak, nonatomic) IBOutlet UILabel *likedLabel;
@property (weak, nonatomic) IBOutlet UILabel *bannedLabel;
@property (weak, nonatomic) IBOutlet UIButton *logoutButton;
- (IBAction)logoutButtonTapped:(UIButton *)sender;

@end
