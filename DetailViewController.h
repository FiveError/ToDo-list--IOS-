//
//  ViewController.h
//  ToDo List
//
//  Created by Сергей Голубев on 05.06.2018.
//  Copyright © 2018 Сергей Голубев. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (nonatomic, strong) NSDate *eventDate;
@property (nonatomic, strong) NSString *eventInfo;
@property (nonatomic, strong) NSString *eventInfoDetail;
@property (nonatomic, assign) BOOL isDetail;

@end

