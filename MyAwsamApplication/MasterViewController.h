//
//  MasterViewController.h
//  MyAwsamApplication
//
//  Created by Herwart Schmidt-Joos on 07.08.12.
//  Copyright (c) 2012 Herwart Schmidt-Joos. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
