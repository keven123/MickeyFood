//
//  AddressViewController.h
//  SJFood
//
//  Created by 叶帆 on 14/12/6.
//  Copyright (c) 2014年 Ye Fan. All rights reserved.
//

#import "BaseViewController.h"

@interface AddressViewController : BaseViewController
@property (strong, nonatomic) IBOutlet UITableView *addressTableView;
@property (strong, nonatomic) IBOutlet UIView *noAddressView;
- (IBAction)addAddressButtonClicked:(id)sender;

@end
