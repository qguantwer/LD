//
//  LDDetailViewController.h
//  LD
//
//  Created by qguan on 12/23/13.
//  Copyright (c) 2013 qguan. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LDDetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
