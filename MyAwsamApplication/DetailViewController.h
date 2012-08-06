//
//  DetailViewController.h
//  MyAwsamApplication
//
//  Created by Herwart Schmidt-Joos on 07.08.12.
//  Copyright (c) 2012 Herwart Schmidt-Joos. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
