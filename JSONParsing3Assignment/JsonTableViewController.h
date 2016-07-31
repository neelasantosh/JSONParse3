//
//  JsonTableViewController.h
//  JSONParsing3Assignment
//
//  Created by Rajesh on 18/12/15.
//  Copyright (c) 2015 CDAC. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface JsonTableViewController : UITableViewController
@property NSMutableArray *arrayData;
@property NSDictionary *dicData;
- (IBAction)refresh:(id)sender;

@end
