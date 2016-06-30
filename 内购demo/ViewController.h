//
//  ViewController.h
//  内购demo
//
//  Created by 法大大 on 16/6/30.
//  Copyright © 2016年 liuyugui. All rights reserved.
//

#import <UIKit/UIKit.h>

//导入库
#import <StoreKit/StoreKit.h>

@interface ViewController : UIViewController<SKProductsRequestDelegate,SKPaymentTransactionObserver>


@property (strong, nonatomic) IBOutlet UITextField *productID;

@property (strong, nonatomic) IBOutlet UIButton *purchase;

- (IBAction)purchaseFunc:(id)sender;

@end

