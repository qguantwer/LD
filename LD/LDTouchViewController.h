//
//  LDTouchViewController.h
//  LD
//
//  Created by qguan on 12/24/13.
//  Copyright (c) 2013 qguan. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LDTouchViewController : UIViewController

@property (weak, nonatomic) IBOutlet UILabel *touchLabel;
@property (weak, nonatomic) IBOutlet UIButton *touchBtn;

- (IBAction)touchBtnPressed:(id)sender;

@end
