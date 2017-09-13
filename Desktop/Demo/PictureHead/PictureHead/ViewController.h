//
//  ViewController.h
//  PictureHead
//
//  Created by chenyong on 17/9/8.
//  Copyright (c) 2017年 chenyong. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UIImageView *headIcon;
- (IBAction)changeIconAction:(UITapGestureRecognizer *)sender;


@end

