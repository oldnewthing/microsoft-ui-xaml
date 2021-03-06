// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

// DO NOT EDIT! This file was generated by CustomTasks.DependencyPropertyCodeGen
#pragma once

class SwipeTestHooksProperties
{
public:
    SwipeTestHooksProperties();



    winrt::event_token IdleStatusChanged(winrt::TypedEventHandler<winrt::SwipeControl, winrt::IInspectable> const& value);
    void IdleStatusChanged(winrt::event_token const& token);
    winrt::event_token LastInteractedWithSwipeControlChanged(winrt::TypedEventHandler<winrt::IInspectable, winrt::IInspectable> const& value);
    void LastInteractedWithSwipeControlChanged(winrt::event_token const& token);
    winrt::event_token OpenedStatusChanged(winrt::TypedEventHandler<winrt::SwipeControl, winrt::IInspectable> const& value);
    void OpenedStatusChanged(winrt::event_token const& token);

    event_source<winrt::TypedEventHandler<winrt::SwipeControl, winrt::IInspectable>> m_idleStatusChangedEventSource;
    event_source<winrt::TypedEventHandler<winrt::IInspectable, winrt::IInspectable>> m_lastInteractedWithSwipeControlChangedEventSource;
    event_source<winrt::TypedEventHandler<winrt::SwipeControl, winrt::IInspectable>> m_openedStatusChangedEventSource;

    static void EnsureProperties();
    static void ClearProperties();
};
