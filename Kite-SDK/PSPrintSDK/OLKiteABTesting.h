//
//  Modified MIT License
//
//  Copyright (c) 2010-2016 Kite Tech Ltd. https://www.kite.ly
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy
//  of this software and associated documentation files (the "Software"), to deal
//  in the Software without restriction, including without limitation the rights
//  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the Software is
//  furnished to do so, subject to the following conditions:
//
//  The software MAY ONLY be used with the Kite Tech Ltd platform and MAY NOT be modified
//  to be used with any competitor platforms. This means the software MAY NOT be modified
//  to place orders with any competitors to Kite Tech Ltd, all orders MUST go through the
//  Kite Tech Ltd platform servers.
//
//  The above copyright notice and this permission notice shall be included in
//  all copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
//  THE SOFTWARE.
//

#import <Foundation/Foundation.h>
#import "OLKiteTheme.h"

static NSString *const kOLKiteThemeHeaderLogoImageURL = @"themeLogoImageURL";
static NSString *const kOLKiteThemeCheckoutProgress1 = @"themeCheckoutProgress1";
static NSString *const kOLKiteThemeCheckoutProgress2 = @"themeCheckoutProgress2";
static NSString *const kOLKiteThemeCheckoutProgress1Bg = @"themeCheckoutProgress1Bg";
static NSString *const kOLKiteThemeCheckoutProgress2Bg = @"themeCheckoutProgress2Bg";
static NSString *const kOLKiteThemeReceiptSuccess = @"themeReceiptSuccess";
static NSString *const kOLKiteThemeReceiptFailure = @"themeReceiptFailure";
static NSString *const kOLKiteThemeReceiptSuccessBg = @"themeReceiptSuccessBg";
static NSString *const kOLKiteThemeReceiptFailureBg = @"themeReceiptFailureBg";
static NSString *const kOLKiteThemeCancelButtonIcon = @"themeCancelButtonIcon";
static NSString *const kOLKiteThemeSupportEmail = @"themeSupportEmail";

static NSString *const kOLKiteLightThemeColor1 = @"ly.kite.theme.light.color.1";
static NSString *const kOLKiteLightThemeColor2 = @"ly.kite.theme.light.color.2";
static NSString *const kOLKiteLightThemeColor3 = @"ly.kite.theme.light.color.3";
static NSString *const kOLKiteLightThemeTitleColor1 = @"ly.kite.theme.light.titleColor.1";
static NSString *const kOLKiteLightThemeFont1 = @"ly.kite.theme.light.font.1";

@interface OLKiteABTesting : NSObject

@property (assign, nonatomic) BOOL launchedWithPrintOrder;

@property (assign, nonatomic, readonly) BOOL offerAddressSearch;
@property (assign, nonatomic, readonly) BOOL requirePhoneNumber;
@property (assign, nonatomic, readonly) BOOL hidePrice;
@property (assign, nonatomic, readonly) BOOL offerPayPal;
@property (assign, nonatomic, readonly) BOOL skipProductOverview;
@property (assign, nonatomic, readonly) BOOL disableProductCategories;
@property (strong, nonatomic, readonly) NSString *qualityBannerType;
@property (strong, nonatomic, readonly) NSString *checkoutScreenType;
@property (strong, nonatomic, readonly) NSString *productTileStyle;
@property (strong, nonatomic, readonly) NSString *promoBannerText;
@property (strong, nonatomic, readonly) NSString *launchWithPrintOrderVariant;
@property (assign, nonatomic, readonly) BOOL allowsMultipleRecipients;
@property (strong, nonatomic, readonly) NSString *paymentScreen;
@property (strong, nonatomic, readonly) NSString *coverPhotoId;

@property (strong, nonatomic, readonly) NSString *headerLogoURL;
@property (strong, nonatomic, readonly) NSString *receiptSuccessURL;
@property (strong, nonatomic, readonly) NSString *receiptFailureURL;
@property (strong, nonatomic, readonly) NSString *receiptSuccessBgURL;
@property (strong, nonatomic, readonly) NSString *receiptFailureBgURL;
@property (strong, nonatomic, readonly) NSString *cancelButtonIconURL;
@property (strong, nonatomic, readonly) NSString *supportEmail;
@property (strong, nonatomic, readonly) UIColor *lightThemeColor1;
@property (strong, nonatomic, readonly) UIColor *lightThemeColor2;
@property (strong, nonatomic, readonly) UIColor *lightThemeColor3;
@property (strong, nonatomic, readonly) UIColor *lightThemeTitleColor1;
- (UIFont *)lightThemeFont1WithSize:(CGFloat)size;
- (NSString *)backButtonText;

@property (strong, nonatomic) NSDictionary *userConfig;
@property (strong, nonatomic) OLKiteTheme *theme;
@property (strong, nonatomic) NSArray *paypalSupportedCurrencies;
//@property (assign, nonatomic) BOOL darkTheme;

+ (instancetype)sharedInstance;
- (void)fetchRemotePlistsWithCompletionHandler:(void(^)())handler;
- (void)prefetchRemoteImages;
//- (UIColor *)darkThemeColor1;
- (void)setupABTestVariants;
- (void)setupCoverPhotoTestWithExperimentDict:(NSDictionary *)experimentDict;
@end
