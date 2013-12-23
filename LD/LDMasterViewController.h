//
//  LDMasterViewController.h
//  LD
//
//  Created by qguan on 12/23/13.
//  Copyright (c) 2013 qguan. All rights reserved.
//

#import <UIKit/UIKit.h>

@class LDDetailViewController;

@interface LDMasterViewController : UITableViewController

@property (strong, nonatomic) LDDetailViewController *detailViewController;

@end
