//
//  PrintStudio.h
//  Kite SDK
//
//  Created by Deon Botha on 19/12/2013.
//  Copyright (c) 2013 Deon Botha. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "OLCheckoutViewController.h"
#import "OLPrintEnvironment.h"
#import "OLAddressPickerController.h"
#import "OLAddress.h"
#import "OLAddress+AddressBook.h"
#import "OLCountry.h"
#import "OLCountryPickerController.h"
#import "OLPayPalCard.h"
#import "OLAsset.h"
#import "OLPrintJob.h"
#import "OLPrintOrder.h"
#import "OLPrintOrder+History.h"
#import "OLProductTemplate.h"
#import "OLConstants.h"

@class OLPrintRequest;

typedef void (^OLPrintProgressCompletionHandler)(float progress);
typedef void (^OLPrintCompletionHandler)(NSString *receiptId, NSError *error);
typedef void (^OLProductCostRefreshCompletionHandler)(NSError *error);

@interface OLKitePrintSDK : NSObject

+ (void)setAPIKey:(NSString *)apiKey withEnvironment:(OLPSPrintSDKEnvironment)environment;

+ (NSString *)apiKey;
+ (OLPSPrintSDKEnvironment)environment;
+ (NSString *)apiEndpoint;

+ (NSString *)paypalEnvironment;
+ (NSString *)paypalClientId;
+ (NSString *)paypalReceiverEmail;

@end