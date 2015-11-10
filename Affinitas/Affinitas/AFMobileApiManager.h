//
//  AFMobileApiManager.h
//  Affinitas
//
//  Created by OnurMac on 11/10/15.
//  Copyright © 2015 Onur Unal. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AFNetworking.h"

@interface AFMobileApiManager : AFHTTPRequestOperationManager

+ (AFMobileApiManager *)sharedClient;

- (void)getProductListWithCompletion:(void (^)(id response))completionBlock error:(void (^)(NSError *error))errorBlock;

@end
