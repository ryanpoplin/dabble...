//
//  ViewController.m
//  aactts
//
//  Created by Byrdann Fox on 10/20/14.
//  Copyright (c) 2014 ExcepApps, Inc. All rights reserved.
//

#import "ViewController.h"
#import "AppDelegate.h"

@interface ViewController ()

@property (weak, nonatomic) IBOutlet UIButton *saveShortcut;
@property (weak, nonatomic) IBOutlet UITextView *textView;

@end

@implementation ViewController

- (void)viewDidLoad {
    
    [super viewDidLoad];
    
    // Do any additional setup after loading the view, typically from a nib.
}

- (IBAction)saveShortcut:(id)sender {

    NSLog(@"... ...");
    
    textViewValue = _textView.text;

    
    
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end