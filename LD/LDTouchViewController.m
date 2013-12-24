//
//  LDTouchViewController.m
//  LD
//
//  Created by qguan on 12/24/13.
//  Copyright (c) 2013 qguan. All rights reserved.
//

#import "LDTouchViewController.h"

@interface LDTouchViewController ()

@end

@implementation LDTouchViewController

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        // Custom initialization
    }
    return self;
}

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view.
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (IBAction)touchBtnPressed:(id)sender {
    self.touchLabel.text = @"Lever Demo";
}
@end
