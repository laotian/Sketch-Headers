//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSError.h"

@interface NSError (CloudAPI)
+ (id)localizedRecoverySuggestionForErrorString:(id)arg1;
+ (id)localizedDescriptionForErrorString:(id)arg1;
+ (unsigned long long)codeForErrorString:(id)arg1;
+ (id)errorStringForErrorMessage:(id)arg1;
+ (id)cloudErrorWithMessage:(id)arg1 statusCode:(long long)arg2;
@property(readonly, nonatomic) long long statusCode;
@property(readonly, nonatomic) BOOL isAuthenticationError;
@end
